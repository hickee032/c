#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	/* 5���� ���ڸ� �Է� Ȧ�� ¦�� ���� */

	int loop = 5;
	int input = 0;
	//3. do-while
	do
	{
		scanf("%d", &input);

		if (input % 2 == 0)
		{
			printf("input : %d\n", input);
			printf("¦�� �Դϴ�.\n");
		}
		else
		{
			printf("input : %d\n", input);
			printf("Ȧ�� �Դϴ�.\n");
		}

		loop--;


	} while (loop >0);


}