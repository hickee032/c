#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//������ ������ �Է� (a-b)x(b+c)x(c%1)

int main() {

	int a = 0;
	int b = 0;
	int c = 0;

	scanf("%d %d %d", &a, &b,&c);

	printf("��� ��� : %d\n", (a - b)*(b + c)*(c % 1));
}