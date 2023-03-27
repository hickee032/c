#include "def.h"
#include <stdio.h>
#include "std_information.h"
#include "std_input_output.h"

STD st;

void showMenu() {

	int input = 0;

	while (1) {

		printf("--------------------------\n");
		printf("--�л� ���� ���α׷� 1.0--\n");
		printf("--------------------------\n");
		printf("- 1. �л� ���� �Է�\n");
		printf("- 2. �л� ���� ����\n");
		printf("- 3. �л� ���� ����\n");
		printf("- 4. �л� ���� �˻�\n");
		printf("- 5. ���� �׷� ����\n");
		printf("--------------------------\n");
		printf("- �޴� ���� :");

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
			printf("���α׷��� �����մϴ�.\n");
			exit(0);
		}

		else {
			printf("�ٽ� �Է� �ϼ���\n");

			return showMenu();

		}

	}
}

void input_std() {

	char flag = 0;

	printf("*�л� ���� �Է¸� �����ϼ̽��ϴ�.\n");

	printf("�й� �Է� (�ִ� 10�ڸ�) : ");
	scanf(" %s", st.stNum);

	printf("�̸� �Է� : ");
	scanf(" %s", st.stName);

	printf("��� ������ �Է� : ");
	scanf(" %s", st.stCall);

	printf("�г� �Է� : ");
	scanf("%d", &st.grade);

	if (st.grade == 1) {
		printf("1�г� ���� : ");
		scanf("%d", &st.score1);
		st.score2 = 0;
		st.score3 = 0;
	}
	if (st.grade == 2) {
		printf("1�г� ���� : ");
		scanf("%d", &st.score1);
		printf("2�г� ���� : ");
		scanf("%d", &st.score2);
		st.score3 = 0;
	}
	if (st.grade == 3) {
		printf("1�г� ���� : ");
		scanf("%d", &st.score1);
		printf("2�г� ���� : ");
		scanf("%d", &st.score2);
		printf("3�г� ���� : ");
		scanf("%d", &st.score3);
	}
	printf("\n");
	printf("===========================\n");
	printf("�й� : %s\n", st.stNum);
	printf("�̸� : %s\n", st.stName);
	printf("��󿬶��� : %s\n", st.stCall);
	printf("�г� : %d\n", st.grade);
	printf("1�г� ���� : %d\n", st.score1);
	printf("2�г� ���� : %d\n", st.score2);
	printf("3�г� ���� : %d\n", st.score3);
	printf("\n");
	printf("�Է��Ͻ� ������ �½��ϱ�? (y,n)\n");

	scanf(" %c", &flag);

	if (flag == 89 || flag == 121) {

		std_input(st);
	}

	else if (flag == 78 || flag == 110) {
		printf(">> �޴��� ���ư��ϴ�.");
		showMenu();
	}

	else {
		printf(">> �ٽ� �Է��ϼ���.");
		input_std();
	}


}

