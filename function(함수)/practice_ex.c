#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {


	printf("======================\n");
	printf("���� ��ȯ ���α׷� 1.0\n");
	printf("======================\n");
	printf("��ȯ�� �ݾ��� �Է� : ");

	int money = 0;

	int oback = 0;
	int back = 0;

	scanf("%d", &money);

	oback = money / 500;
	int nmg = money % 500;

	printf("������ : %d", nmg);

	back = nmg / 100;

	

	printf("----------------------\n");
	printf("500�� ���� ���� : %d\n",oback);
	printf("100�� ���� ���� : %d\n",back);
	printf("50�� ���� ���� : \n");
	printf("10�� ���� ���� : \n");
	printf("�ٲ��� ���� ���� ���� : \n");

}