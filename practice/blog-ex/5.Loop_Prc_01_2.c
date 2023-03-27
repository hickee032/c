#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	/* 5개의 숫자를 입력 홀수 짝수 구분 */
	int loop = 5;
	int input = 0;
	//2. while


	while (loop > 0)
	{
		scanf("%d", &input);

		if (input % 2 == 0)
		{
			printf("input : %d\n", input);
			printf("짝수 입니다.\n");
		}
		else
		{
			printf("input : %d\n", input);
			printf("홀수 입니다.\n");
		}

		loop--;
	}


}