#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 구구단 짝수 단만 출력 2단은 2까지 4단은 4까지 6단은 6까지 8단은 8까지*/

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

