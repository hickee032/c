#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*������ 1�� ���*/
	int input = 0;

	printf("����� ����ұ�� : ");
	scanf("%d", &input);
	for (int i = 1; i < 10; i++)
	{
		printf("%d x %d = %d\n", input, i, input * i);
	}

	/*������ ���*/

	for (int i = 1; i < 10; i++)
	{
		for (int j = 2; j < 10; j++)
		{
			printf("%d x %d = %d\t",j,i,i*j);
		}
		printf("\n");
	}


}