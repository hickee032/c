#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�ΰ��� ���� �� ������ 7 -> �� 3 ������ 1

int main() {

	int a = 0;
	int b = 0;

	scanf("%d %d", &a, &b);

	printf("�� : %d ������ : %d\n", a/b,a%b);
}