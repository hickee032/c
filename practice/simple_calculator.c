#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int opration(int a, int b, char n);

int main() {

	int num1 = 0, num2 = 0;
	char op = 0;
	printf("숫자를 입력하세요\n");
	scanf("%d %d", &num1, &num2);
	printf("연산자(+ - * /)를 입력\n");
	scanf(" %c", &op);

	printf("계산 결과 : %d\n", opration(num1, num2, op));

}

int opration(int a, int b, char n) {

	int result = 0;

	if (n == '+') {
		result = a + b;
	}
	else if (n == '-') {
		result = a - b;
	}
	else if (n == '*') {
		result = a * b;
	}
	else if (n == '/') {
		result = a / b;
	}
	else {
		printf("연산자가 아님\n");
		exit(0);
	}
	return result;
}