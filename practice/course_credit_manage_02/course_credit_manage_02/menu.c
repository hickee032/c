#include "def.h"
#include <stdio.h>
#include "menu.h"
#include "haksa.h"
//�Ⱦ��� ��� ������ �ִ��� ������ �߻����� �ʴ� ��.

//���� �޴�
int main_menu() {

	printf("--------------------------\n");
	printf("--�л� ���� ���α׷� 1.0--\n");
	printf("--------------------------\n");
	printf("- 1. �л� ���� �Է�\n");
	printf("- 2. �л� ���� ����\n");
	printf("- 3. �л� ���� ����\n");
	printf("- 4. �л� ���� ����\n");
	printf("- 5. �л� ���� �˻�\n");
	printf("- 6. ���� �ʱ�ȭ\n");
	printf("- 7. ���� �׷� ����\n");
	printf("--------------------------\n");
	printf(">> �޴� ���� :");
	int menu = 0;
	scanf("%d", &menu);
	return menu;
}

void stdPrint(LECTURE lec) {

	printf("=====================\n");
	printf("= �� �� �� û �� Ȳ =\n");
	printf("=====================\n");
	printf("===== %d : %s ��=====\n", lec.std.std_id, lec.std.name);
	printf("= 1�� =\n");
	printf(">> ��û ���� : %s ���� %d\n", lec.major[0].name, lec.major[0].hakjum);
	printf("= 2�� =\n");
	printf(">> ��û ���� : %s ���� %d\n", lec.major[1].name, lec.major[1].hakjum);
	printf("= 3�� =\n");
	printf(">> ��û ���� : %s ���� %d\n", lec.major[2].name, lec.major[2].hakjum);
	printf("= ���ǽ� : %s =\n", lec.class_room);
	printf("======================================\n");
	printf("= ��� ������ : %s =\n", lec.prof.name);
	printf("= ��ȭ��ȣ : %s =\n", lec.prof.tel);
	printf("= E-MAIL : %s =\n", lec.prof.email);
	printf("======================================\n");


}