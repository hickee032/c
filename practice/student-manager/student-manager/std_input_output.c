#include "def.h"
#include <stdio.h>
#include <string.h>
#include "std_information.h"
#include "std_input_output.h"

void std_output() {

	FILE* fpr = fopen("D:/student_infor.txt", "rb");
	if (fpr == NULL) {
		printf("������ �о�� �� �����ϴ�.\n");
		printf("��ο� ������ �������� �ʽ��ϴ�.\n");
		return showMenu();
	}

//	STD st = { 0, };

	while (fread(&st, sizeof(st), 1, fpr) == 1) {
		
		printf("*�л� ������ �ҷ��ɴϴ�.\n");
		printf("========================\n");
		printf("�й� %s\n",st.stNum);
		printf("�̸� %s\n", st.stName);
		printf("��󿬶��� %s\n", st.stCall);
		printf("�г� %d\n", st.grade);
		printf("========================\n");
		printf("1�г� ���� : %d\n", st.score1);
		printf("2�г� ���� : %d\n", st.score2);
		printf("3�г� ���� : %d\n", st.score3);

	}

	printf("\n");
	showMenu();
}

void std_input(STD st) {

	printf(">> ���� �ۼ��� �����մϴ�.\n");

	FILE* fp = NULL;
	fp = fopen("D:/student_infor.txt", "ab");
	if (fp == NULL) {
		printf("������ ������ �� �����ϴ�.");
		return;
	}
	fwrite(&st, sizeof(st), 1, fp);

	fclose(fp);

	printf(">> ���� �ۼ��� �Ϸ��մϴ�.\n");

	printf("\n");
	showMenu();

}

void std_delete() {

	char flag = 0;

	printf(">> ���� ������ �ϰڽ��ϱ�.(y,n)\n");
	
	scanf(" %c", &flag);

	if (flag == 89 || flag == 121) {

		printf(">> ���� ������ �����մϴ�.\n");

		char path[] = "D:/student_infor.txt";

		int result = remove(path);

		if (result == 0) {

			printf(">> ���� ���� ����.\n");
		}
		else {
			printf(">> ������ �����ϴ�..\n");
		}
		printf(">> ���� ������ �Ϸ��մϴ�.\n");
	}

	else if (flag == 78 || flag == 110) {
		printf(">> ���� ������ ����մϴ�.\n");
		printf(">> �޴��� ���ư��ϴ�.");
		showMenu();
	}

	else {
		printf(">> �ٽ� �Է��ϼ���.");
		std_delete();
	}
	
	
	
	/*
	STD empty = {0,};

	FILE* fp = NULL;
	fp = fopen("D:/student_infor.bin", "wb");

	if (fp == NULL) {
		printf("������ ���� �� �� �����ϴ�.");
		return;
	}
	fwrite(&empty, sizeof(empty), 1, fp);

	fclose(fp);

	printf(">> ���� ������ �Ϸ��մϴ�.\n");

	printf("\n");
	showMenu();
	*/
	showMenu();
}

void std_Search() {

	char name[10];

	printf("ã�� �̸��� �Է��ϼ���\n");

	scanf("%s", name);

	FILE* fpr = fopen("D:/student_infor.txt", "rb");
	if (fpr == NULL) {

		printf("������ ���� �������ּ���.");

		return showMenu();
	}

	int count = 0;

	while (fread(&st, sizeof(st), 1, fpr) == 1) {

		if (strcmp(name, st.stName) == 0) {

			printf("* %s �л� ����\n", name);
			printf("========================\n");
			printf("�й� %s\n", st.stNum);
			printf("�̸� %s\n", st.stName);
			printf("��󿬶��� %s\n", st.stCall);
			printf("�г� %d\n", st.grade);
			printf("========================\n");
			printf("1�г� ���� : %d\n", st.score1);
			printf("2�г� ���� : %d\n", st.score2);
			printf("3�г� ���� : %d\n", st.score3);

			count++;
		}
	}

	if (count == 0) {
		printf("�л� ������ ã�� �� �����ϴ�.");
	}
	printf("\n");
	return showMenu();

}

