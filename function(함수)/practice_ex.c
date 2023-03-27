#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {


	printf("======================\n");
	printf("동전 교환 프로그램 1.0\n");
	printf("======================\n");
	printf("교환할 금액을 입력 : ");

	int money = 0;

	int oback = 0;
	int back = 0;

	scanf("%d", &money);

	oback = money / 500;
	int nmg = money % 500;

	printf("나머지 : %d", nmg);

	back = nmg / 100;

	

	printf("----------------------\n");
	printf("500원 동전 개수 : %d\n",oback);
	printf("100원 동전 개수 : %d\n",back);
	printf("50원 동전 개수 : \n");
	printf("10원 동전 개수 : \n");
	printf("바꾸지 못한 동전 개수 : \n");

}