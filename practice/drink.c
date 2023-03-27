#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

const wchar_t drink[5][20] = { {L"1.��ī�ݶ�"},{L"2.ĥ�����̴�"},{L"3.ȯŸ"},{L"4.�̸���"},{L"5.������"} };
const int won[5] = { 1200, 1000, 700, 600, 500 };

void showDrink(wchar_t a[][20], int b[]);
int moneyShort(int money, int drinkWon);
int selectDrink(int money, int select);
int selectDrink(int money, int select);


int main() {

	int select = 0;
	int money = 0;

	//wchar_t drink[5][20] = { {L"1.��ī�ݶ�"},{L"2.ĥ�����̴�"},{L"3.ȯŸ"},{L"4.�̸���"},{L"5.������"} };
	//int won[5] = { 1200, 1000, 700, 600, 500 };

	printf("--------------------\n");
	printf("���ϴ� ������� ����\n");
	printf("--------------------\n");

	showDrink(drink, won);

	printf("--------------------\n");
	printf("�ݾ��� �Է� :");
	scanf("%d", &money);


	int boolean = 1;


	while (boolean) {

		if (money < 500) {
			printf("������ �� �ִ� ��ǰ�� �����ϴ�.\n");
			printf("�ݾ��� �ٽ� �Է� :\n");
			scanf("%d", &money);
		}
		else {
			boolean = 0;
		}
	}

	printf("--------------------\n");
	printf("������� ���� :");
	scanf("%d", &select);

	selectDrink(money, select);

}

//���
void showDrink(wchar_t a[][20], int b[]) {

	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 20; j++) {
			setlocale(LC_ALL, "");
			wprintf(L"%lc", a[i][j]);
		}
		printf("\t%d\n", b[i]);
	}
}
//���� �Ұ�
int moneyShort(int money, int drinkWon) {

	int select = 0;
	int result = 0;

	if (money < 500) {
		printf("������ �� �ִ� ��ǰ�� �����ϴ�.\n");
		printf("�ݾ��� �ٽ� �Է� :\n");
		scanf("%d", &money);
		selectDrink(money, select);
	}

	if (drinkWon > money) {
		printf("������ �� �����ϴ�.\n");
		printf("�ٸ� ��ǰ�� �����ϼ���.\n");
		scanf("%d", &select);
		//noSelect();
		selectDrink(money, select);
	}
	else {
		result = money - drinkWon;
		printf("�Ž������� %d ���Դϴ�.\n", result);
	}


}
//��ǰ ����
int selectDrink(int money, int select) {

	if (money < 500) {

		printf("������ �� �ִ� ��ǰ�� �����ϴ�.\n");
		printf("�ݾ��� �ٽ� �Է� :\n");
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
		printf("�߸��� ��ȣ �����Դϴ�.\n");
		printf("�ٽ� �����ϼ��� : ");
		scanf("%d", &select);
		//noSelect();
		return selectDrink(money, select);
		break;
	}
}