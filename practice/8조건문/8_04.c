#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ������ ¦�� �ܸ� ��� 2���� 2���� 4���� 4���� 6���� 6���� 8���� 8����*/

int main() {

	/*
	for (int i = 2; i < 10; i++)
	{
	
			for (int j = 1; j <= i; j++)
			{
				if (i % 2 == 0)
				{
					printf("%d x %d =  %d\t", i, j, i * j);
					
				}
				printf("\n");
			}
			
	}
	*/

	for (int i = 2; i < 10; i++)
	{

		for (int j = 1; j <= i; j++)
		{
			if (i % 2 != 0)
			{
				continue;
			}
			if (i%2 ==0)
			{
				printf("%d x %d =  %d\t", i, j, i * j);
			}
			printf("\n");
		}

	}
	




	

}

