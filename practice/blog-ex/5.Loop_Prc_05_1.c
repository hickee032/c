#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*구구단 1개 출력*/
	int input = 0;

	printf("몇단을 출력할까요 : ");
	scanf("%d", &input);
	for (int i = 1; i < 10; i++)
	{
		printf("%d x %d = %d\n", input, i, input * i);
	}

	/*구구단 출력*/

	for (int i = 1; i < 10; i++)
	{
		for (int j = 2; j < 10; j++)
		{
			printf("%d x %d = %d\t",j,i,i*j);
		}
		printf("\n");
	}


}