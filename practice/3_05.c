#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//세개의 정수를 입력 (a-b)x(b+c)x(c%1)

int main() {

	int a = 0;
	int b = 0;
	int c = 0;

	scanf("%d %d %d", &a, &b,&c);

	printf("계산 결과 : %d\n", (a - b)*(b + c)*(c % 1));
}