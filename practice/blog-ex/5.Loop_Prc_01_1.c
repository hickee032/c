#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	/* 5���� ���ڸ� �Է� Ȧ�� ¦�� ���� */

	int input = 0;
	//1. for
	for (size_t i = 0; i < 5; i++)
	{
		scanf("%d", &input);

		if (input%2 ==0)
		{
			printf("input : %d\n", input);
			printf("¦�� �Դϴ�.\n");
		}
		else
		{
			printf("input : %d\n", input);
			printf("Ȧ�� �Դϴ�.\n");
		}

	}
	

}