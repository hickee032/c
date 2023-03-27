#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

const wchar_t drink[5][20] = { {L"1.코카콜라"},{L"2.칠성사이다"},{L"3.환타"},{L"4.미린다"},{L"5.레쓰비"} };
const int won[5] = { 1200, 1000, 700, 600, 500 };

void showDrink(wchar_t a[][20], int b[]);
int moneyShort(int money, int drinkWon);
int selectDrink(int money, int select);
int selectDrink(int money, int select);


int main() {

	int select = 0;
	int money = 0;

	//wchar_t drink[5][20] = { {L"1.코카콜라"},{L"2.칠성사이다"},{L"3.환타"},{L"4.미린다"},{L"5.레쓰비"} };
	//int won[5] = { 1200, 1000, 700, 600, 500 };

	printf("--------------------\n");
	printf("원하는 음료수를 선택\n");
	printf("--------------------\n");

	showDrink(drink, won);

	printf("--------------------\n");
	printf("금액을 입력 :");
	scanf("%d", &money);


	int boolean = 1;


	while (boolean) {

		if (money < 500) {
			printf("구입할 수 있는 제품이 없습니다.\n");
			printf("금액을 다시 입력 :\n");
			scanf("%d", &money);
		}
		else {
			boolean = 0;
		}
	}

	printf("--------------------\n");
	printf("음료수를 선택 :");
	scanf("%d", &select);

	selectDrink(money, select);

}

//출력
void showDrink(wchar_t a[][20], int b[]) {

	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 20; j++) {
			setlocale(LC_ALL, "");
			wprintf(L"%lc", a[i][j]);
		}
		printf("\t%d\n", b[i]);
	}
}
//구입 불가
int moneyShort(int money, int drinkWon) {

	int select = 0;
	int result = 0;

	if (money < 500) {
		printf("구입할 수 있는 제품이 없습니다.\n");
		printf("금액을 다시 입력 :\n");
		scanf("%d", &money);
		selectDrink(money, select);
	}

	if (drinkWon > money) {
		printf("구입할 수 없습니다.\n");
		printf("다른 제품을 선택하세요.\n");
		scanf("%d", &select);
		//noSelect();
		selectDrink(money, select);
	}
	else {
		result = money - drinkWon;
		printf("거스름돈은 %d 원입니다.\n", result);
	}


}
//제품 선택
int selectDrink(int money, int select) {

	if (money < 500) {

		printf("구입할 수 있는 제품이 없습니다.\n");
		printf("금액을 다시 입력 :\n");
		scanf("%d", &money);
		selectDrink(money, select);
	}

	switch (select) {
	case 1: //1200
		moneyShort(money, 1200);
		break;
	case 2: //1000
		moneyShort(money, 1000);
		break;
	case 3: //700
		moneyShort(money, 700);
		break;
	case 4: //600
		moneyShort(money, 600);
		break;
	case 5: //500
		moneyShort(money, 500);
		break;

	default:
		printf("잘못된 번호 선택입니다.\n");
		printf("다시 선택하세요 : ");
		scanf("%d", &select);
		//noSelect();
		return selectDrink(money, select);
		break;
	}
}