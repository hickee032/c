#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int a);

int main() {

	int input = 0;

	printf("숫자를 입력하세요\n");
	scanf("%d", &input);
	printf("input : %d\n", input);

	int result = factorial(input);

	printf("result : %d", result);
}

int factorial(int a) {
	if (a == 1) {
		return 1;
	}

	printf("a의 값 : %d\n", a);

	return a * factorial(a - 1);
}

