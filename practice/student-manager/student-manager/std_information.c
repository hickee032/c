#include "def.h"
#include <stdio.h>
#include "std_information.h"
#include "std_input_output.h"

STD st;

void showMenu() {

	int input = 0;

	while (1) {

		printf("--------------------------\n");
		printf("--학사 관리 프로그램 1.0--\n");
		printf("--------------------------\n");
		printf("- 1. 학생 정보 입력\n");
		printf("- 2. 학생 정보 보기\n");
		printf("- 3. 학생 정보 삭제\n");
		printf("- 4. 학생 정보 검색\n");
		printf("- 5. 프로 그램 종료\n");
		printf("--------------------------\n");
		printf("- 메뉴 선택 :");

		scanf("%d", &input);

		//printf("%d\n", input);

		//if (0 < input && input < 6) {

		if (input == 1) {
			return input_std();
		}
		else if (input == 2) {
			return std_output();
		}
		else if (input == 3) {
			return std_delete();
		}
		else if (input == 4) {
			return std_Search();
		}
		else if (input == 5) {
			printf("프로그램을 종료합니다.\n");
			exit(0);
		}

		else {
			printf("다시 입력 하세요\n");

			return showMenu();

		}

	}
}

void input_std() {

	char flag = 0;

	printf("*학생 정보 입력를 선택하셨습니다.\n");

	printf("학번 입력 (최대 10자리) : ");
	scanf(" %s", st.stNum);

	printf("이름 입력 : ");
	scanf(" %s", st.stName);

	printf("비상 연락망 입력 : ");
	scanf(" %s", st.stCall);

	printf("학년 입력 : ");
	scanf("%d", &st.grade);

	if (st.grade == 1) {
		printf("1학년 학점 : ");
		scanf("%d", &st.score1);
		st.score2 = 0;
		st.score3 = 0;
	}
	if (st.grade == 2) {
		printf("1학년 학점 : ");
		scanf("%d", &st.score1);
		printf("2학년 학점 : ");
		scanf("%d", &st.score2);
		st.score3 = 0;
	}
	if (st.grade == 3) {
		printf("1학년 학점 : ");
		scanf("%d", &st.score1);
		printf("2학년 학점 : ");
		scanf("%d", &st.score2);
		printf("3학년 학점 : ");
		scanf("%d", &st.score3);
	}
	printf("\n");
	printf("===========================\n");
	printf("학번 : %s\n", st.stNum);
	printf("이름 : %s\n", st.stName);
	printf("비상연락망 : %s\n", st.stCall);
	printf("학년 : %d\n", st.grade);
	printf("1학년 학점 : %d\n", st.score1);
	printf("2학년 학점 : %d\n", st.score2);
	printf("3학년 학점 : %d\n", st.score3);
	printf("\n");
	printf("입력하신 정보가 맞습니까? (y,n)\n");

	scanf(" %c", &flag);

	if (flag == 89 || flag == 121) {

		std_input(st);
	}

	else if (flag == 78 || flag == 110) {
		printf(">> 메뉴로 돌아갑니다.");
		showMenu();
	}

	else {
		printf(">> 다시 입력하세요.");
		input_std();
	}


}

