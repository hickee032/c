#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
/*1 ~ 100 ������ ���� �߿� 5�� ����� ���*/
	//1.for��
	printf("for��-\n");
	for (int i = 1; i <= 100; i++)
	{
		if (i%5==0)
		{
			printf("%d, ", i);
		}
	}
	printf("\n");
	//2.while
	printf("while��-\n");
	int loop = 1;
	while (loop < 101)
	{
		if (loop % 5 == 0)
		{
			printf("%d, ", loop);
		}
		loop++;
	}

	printf("\n");

	//2.do-while

	int loop1 = 1;
	printf("do-while��-\n");
	do
	{
		if (loop1 % 5 == 0)
		{
			printf("%d, ", loop1);
		}
		loop1++;

	} while (loop1<101);


}