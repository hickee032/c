#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*���ѷ����� ���
	�޴������� �߸��ϸ� �߸��� �Է��Դϴ�
	�޴��� �����ϴ���� �޴��� �׻� ���̰�*/

	int select = 0;

	while (1)
	{
		printf("---------------\n");
		printf("1.���� ����\n");
		printf("2.���� �б�\n");
		printf("3.����\n");
		printf("---------------\n");
		printf("�޴��� �����ϼ��� : ");
		scanf("%d", &select);

		if (1<=select &&select <= 3)
		{
			if (select == 1) {
				printf("������ �����˴ϴ�.\n");
			}
			if (select == 2) {
				printf("������ �н��ϴ�.\n");
			}
			if (select == 3)
			{
				printf("���α׷� ����.\n");
				break;
			}
			
		}
		else
		{
			printf("�ٽ� ����.\n");
		}

		


	}



}