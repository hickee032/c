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
		printf("파일을 생성할수 없습니다.\n");
		return;
	}
	fwrite(&lect, sizeof(lect), 1, fw);
	fclose(fw);
}

void fileRead() {
	system("cls");
	printf("파일을 읽어오고 있습니다.\n");

	FILE* fr = NULL;
	fr = fopen(fileAddress, "rt");
	if (fr==NULL) {
		printf("파일을 읽어올 수 없습니다.\n");
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
	printf("검색할 학번을 입력하세요 :");
	scanf("%d", &input);

	FILE* fr = NULL;
	fr = fopen(fileAddress, "rt");
	if (fr == NULL) {
		printf("파일을 읽어올 수 없습니다.\n");
		return;
	}
	LECTURE lect = { 0, };
	int count = 0;

	if (fread(&lect, sizeof(lect), 1, fr) == 0) {

		printf("파일의 내용이 없습니다.\n");
		printf("메인메뉴로 돌아갑니다.\n");
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
		printf("검색 결과가 없습니다.\n");
	}

	fclose(fr);
}

void fileInit() {

	system("cls");
	int input = 0;

	fontcolor(14);
	printf("데이터를 초기화 합니다.\n");
	printf("확실 합니까? [Y/N]\n");
	
	scanf("%d", &input);
	getchar();

	if (input == 78 || input == 110) {
		printf("메인메뉴로 돌아갑니다.");
		main_menu();
	}

	FILE* fi = NULL;
	fi = fopen(fileAddress, "wt");
	if (fi == NULL) {
		printf("초기화할 파일이 없습니다.\n");
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
	printf("수강을 변경할 학번을 입력하세요\n");
	scanf("%d", &input);

	FILE* fw = NULL;
	FILE* fr = NULL;
	fr = fopen(fileAddress, "rt");
	if (fr == NULL) {
		printf("파일을 읽어올 수 없습니다.\n");
		return;
	}
	int count = 0;
	while (fread(&lect, sizeof(lect), 1, fr) == 1) {

		if (input != lect.std.std_id) {
			memcpy(&lec, &lect, sizeof(lect));

			
			fw = fopen("D:/haksa_1.txt", "at");
			if (fw == NULL) {
				printf("파일을 생성할수 없습니다.\n");
				return;
			}
			fwrite(&lec, sizeof(lec), 1, fw);

			

		}
		if (input == lect.std.std_id) {








			fw = fopen("D:/haksa_1.txt", "at");
			if (fw == NULL) {
				printf("파일을 생성할수 없습니다.\n");
				return;
			}
			fwrite(&lec, sizeof(lec), 1, fw);

		}
		printCs(lec);
	}
	fclose(fw);
	fclose(fr);






	
}