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
	printf("동전 교환\n");
	printf("========\n");
	printf("교환할 금액을 입력 : ");

	scanf("%d", &money);



	won500 = money / 500;
	money = money % 500;

	won100 = money / 100;
	money = money % 100;

	won50 = money / 50;
	money = money % 50;

	won10 = money / 10;
	noc = money % 10;

	//출력
	printf("500원 %d 개\n", won500);
	printf("100원 %d 개\n", won100);
	printf("50원 %d 개\n", won50);
	printf("10원 %d 개\n", won10);
	printf("바꾸지 못한 잔돈 %d 개\n", noc);

}