#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int money = 0;

	int won500 = 0;
	int won100 = 0;
	int won50 = 0;
	int won10 = 0;
	int noc = 0;

	printf("========\n");
	printf("���� ��ȯ\n");
	printf("========\n");
	printf("��ȯ�� �ݾ��� �Է� : ");

	scanf("%d", &money);



	won500 = money / 500;
	money = money % 500;

	won100 = money / 100;
	money = money % 100;

	won50 = money / 50;
	money = money % 50;

	won10 = money / 10;
	noc = money % 10;

	//���
	printf("500�� %d ��\n", won500);
	printf("100�� %d ��\n", won100);
	printf("50�� %d ��\n", won50);
	printf("10�� %d ��\n", won10);
	printf("�ٲ��� ���� �ܵ� %d ��\n", noc);

}