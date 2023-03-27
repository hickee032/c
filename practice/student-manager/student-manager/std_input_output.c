#include "def.h"
#include <stdio.h>
#include <string.h>
#include "std_information.h"
#include "std_input_output.h"

void std_output() {

	FILE* fpr = fopen("D:/student_infor.txt", "rb");
	if (fpr == NULL) {
		printf("파일을 읽어올 수 없습니다.\n");
		printf("경로에 파일이 존재하지 않습니다.\n");
		return showMenu();
	}

//	STD st = { 0, };

	while (fread(&st, sizeof(st), 1, fpr) == 1) {
		
		printf("*학생 정보를 불러옵니다.\n");
		printf("========================\n");
		printf("학번 %s\n",st.stNum);
		printf("이름 %s\n", st.stName);
		printf("비상연락망 %s\n", st.stCall);
		printf("학년 %d\n", st.grade);
		printf("========================\n");
		printf("1학년 학점 : %d\n", st.score1);
		printf("2학년 학점 : %d\n", st.score2);
		printf("3학년 학점 : %d\n", st.score3);

	}

	printf("\n");
	showMenu();
}

void std_input(STD st) {

	printf(">> 파일 작성을 시작합니다.\n");

	FILE* fp = NULL;
	fp = fopen("D:/student_infor.txt", "ab");
	if (fp == NULL) {
		printf("파일을 생성할 수 없습니다.");
		return;
	}
	fwrite(&st, sizeof(st), 1, fp);

	fclose(fp);

	printf(">> 파일 작성을 완료합니다.\n");

	printf("\n");
	showMenu();

}

void std_delete() {

	char flag = 0;

	printf(">> 파일 삭제를 하겠습니까.(y,n)\n");
	
	scanf(" %c", &flag);

	if (flag == 89 || flag == 121) {

		printf(">> 파일 삭제를 시작합니다.\n");

		char path[] = "D:/student_infor.txt";

		int result = remove(path);

		if (result == 0) {

			printf(">> 파일 삭제 성공.\n");
		}
		else {
			printf(">> 파일이 없습니다..\n");
		}
		printf(">> 파일 삭제를 완료합니다.\n");
	}

	else if (flag == 78 || flag == 110) {
		printf(">> 파일 삭제를 취소합니다.\n");
		printf(">> 메뉴로 돌아갑니다.");
		showMenu();
	}

	else {
		printf(">> 다시 입력하세요.");
		std_delete();
	}
	
	
	
	/*
	STD empty = {0,};

	FILE* fp = NULL;
	fp = fopen("D:/student_infor.bin", "wb");

	if (fp == NULL) {
		printf("파일을 삭제 할 수 없습니다.");
		return;
	}
	fwrite(&empty, sizeof(empty), 1, fp);

	fclose(fp);

	printf(">> 내용 삭제를 완료합니다.\n");

	printf("\n");
	showMenu();
	*/
	showMenu();
}

void std_Search() {

	char name[10];

	printf("찾을 이름을 입력하세요\n");

	scanf("%s", name);

	FILE* fpr = fopen("D:/student_infor.txt", "rb");
	if (fpr == NULL) {

		printf("파일을 먼저 생성해주세요.");

		return showMenu();
	}

	int count = 0;

	while (fread(&st, sizeof(st), 1, fpr) == 1) {

		if (strcmp(name, st.stName) == 0) {

			printf("* %s 학생 정보\n", name);
			printf("========================\n");
			printf("학번 %s\n", st.stNum);
			printf("이름 %s\n", st.stName);
			printf("비상연락망 %s\n", st.stCall);
			printf("학년 %d\n", st.grade);
			printf("========================\n");
			printf("1학년 학점 : %d\n", st.score1);
			printf("2학년 학점 : %d\n", st.score2);
			printf("3학년 학점 : %d\n", st.score3);

			count++;
		}
	}

	if (count == 0) {
		printf("학생 정보를 찾을 수 없습니다.");
	}
	printf("\n");
	return showMenu();

}

