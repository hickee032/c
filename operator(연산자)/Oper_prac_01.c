#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 1���� ���� �Է� �޾Ƽ� Ȧ�� ¦������ Ȯ��
		���� ������ ���*/
	int input = 0;
	int n = 0;

	printf("���ڸ� �Է� �ϼ��� : ");
	scanf("%d", &input);
	//printf("input : %d", input);

	n = input % 2 == 0 ? 2 : 1;

	if (n==2)
	{
		printf("¦�� �Դϴ�.");
	}
	else
	{
		printf("Ȧ�� �Դϴ�.");
	}
}