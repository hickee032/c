#include "def.h"
#include <stdio.h>
#include <Windows.h>
#include "cui.h"
#include "menu.h"
#include "haksa.h"
#include "file_util.h"
#include "output_print.h"
#include "util.h"

char fileAddress[] = "D:/haksa_1.txt";
char wbAb[] = "at";

void fileWrite(LECTURE lect,char a[]) {
	FILE* fw = NULL;
	fw = fopen(fileAddress,a);
	if (fw==NULL) {
		printf("������ �����Ҽ� �����ϴ�.\n");
		return;
	}
	fwrite(&lect, sizeof(lect), 1, fw);
	fclose(fw);
}

void fileRead() {
	system("cls");
	printf("������ �о���� �ֽ��ϴ�.\n");

	FILE* fr = NULL;
	fr = fopen(fileAddress, "rt");
	if (fr==NULL) {
		printf("������ �о�� �� �����ϴ�.\n");
		return;
	}

	LECTURE lect = { 0, };
	
	while (fread(&lect, sizeof(lect), 1, fr)==1) {

		printCs(lect);
	}

	fclose(fr);

}

void fileSearch() {

	system("cls");

	int input = 0;
	printf("�˻��� �й��� �Է��ϼ��� :");
	scanf("%d", &input);

	FILE* fr = NULL;
	fr = fopen(fileAddress, "rt");
	if (fr == NULL) {
		printf("������ �о�� �� �����ϴ�.\n");
		return;
	}
	LECTURE lect = { 0, };
	int count = 0;

	if (fread(&lect, sizeof(lect), 1, fr) == 0) {

		printf("������ ������ �����ϴ�.\n");
		printf("���θ޴��� ���ư��ϴ�.\n");
		Sleep(1000);
		system("cls");
		return main_menu();
	}

	while (fread(&lect, sizeof(lect), 1, fr) == 1) {

		if (input == lect.std.std_id) {
			printCs(lect);
			count++;
		}
	}
	if (count ==0) {
		printf("�˻� ����� �����ϴ�.\n");
	}

	fclose(fr);
}

void fileInit() {

	system("cls");
	int input = 0;

	fontcolor(14);
	printf("�����͸� �ʱ�ȭ �մϴ�.\n");
	printf("Ȯ�� �մϱ�? [Y/N]\n");
	
	scanf("%d", &input);
	getchar();

	if (input == 78 || input == 110) {
		printf("���θ޴��� ���ư��ϴ�.");
		main_menu();
	}

	FILE* fi = NULL;
	fi = fopen(fileAddress, "wt");
	if (fi == NULL) {
		printf("�ʱ�ȭ�� ������ �����ϴ�.\n");
		return;
	}
	fwrite(0,0,0,fi);

	fclose(fi);
}

void fileChange() {

	system("cls");

	int input = 0;
	LECTURE lect = { 0, };
	LECTURE lec = { 0, };
	printf("������ ������ �й��� �Է��ϼ���\n");
	scanf("%d", &input);

	FILE* fw = NULL;
	FILE* fr = NULL;
	fr = fopen(fileAddress, "rt");
	if (fr == NULL) {
		printf("������ �о�� �� �����ϴ�.\n");
		return;
	}
	int count = 0;
	while (fread(&lect, sizeof(lect), 1, fr) == 1) {

		if (input != lect.std.std_id) {
			memcpy(&lec, &lect, sizeof(lect));

			
			fw = fopen("D:/haksa_1.txt", "at");
			if (fw == NULL) {
				printf("������ �����Ҽ� �����ϴ�.\n");
				return;
			}
			fwrite(&lec, sizeof(lec), 1, fw);

			

		}
		if (input == lect.std.std_id) {








			fw = fopen("D:/haksa_1.txt", "at");
			if (fw == NULL) {
				printf("������ �����Ҽ� �����ϴ�.\n");
				return;
			}
			fwrite(&lec, sizeof(lec), 1, fw);

		}
		printCs(lec);
	}
	fclose(fw);
	fclose(fr);






	
}