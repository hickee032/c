#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int opration(int a, int b, char n);

int main() {

	int num1 = 0, num2 = 0;
	char op = 0;
	printf("���ڸ� �Է��ϼ���\n");
	scanf("%d %d", &num1, &num2);
	printf("������(+ - * /)�� �Է�\n");
	scanf(" %c", &op);

	printf("��� ��� : %d\n", opration(num1, num2, op));

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
		printf("�����ڰ� �ƴ�\n");
		exit(0);
	}
	return result;
}