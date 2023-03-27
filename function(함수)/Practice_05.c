#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 숫자 입력 받아서 구구단 출력*/

int main() {

	int a = 0;
	printf("숫자를 입력하세요 : ");

	scanf("%d", &a);
	gugu(a);

	//홀수 출력 구구단
	int oddgugu();

}

int gugu(int a) {

	for (int i = 1; i < 9; i++)
	{
		printf("%d * %d = %d\n", a, i, a * i);
	}
}

int oddgugu() {

	for (int i = 2; i < 10; i++)
	{
		if (i%2!=0)
		{
			for (int j = 1; i < 10; i++) {
				printf("%d * %d = %d\n", i, j, i * j);
			}
		}
		else {
			printf("\n");
		}

	}

}

