#include "def.h"
#include <stdio.h>
#include "menu.h"
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