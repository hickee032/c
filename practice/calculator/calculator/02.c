#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int menu();
void cho(int c);
int serch(int a);
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main() {

	while (1) {

		menu();
	}
}

int menu() {

	int choice = 0;
	printf("--------------\n");
	printf("������ ����\n");
	printf("--------------\n");
	printf("1.����\n");
	printf("2.����\n");
	printf("3.����\n");
	printf("4.������\n");
	printf("5.����\n");
	printf("--------------\n");

	printf("�޴��� ����\n");
	scanf("%d", &choice);
	return serch(choice);
}
void cho(int c) {

	int a = 0, b = 0;

	switch (c) {
	case 1:
		printf("����\n");
		scanf("%d %d", &a, &b);
		printf("%d\n", add(a, b));

		break;

	case 2:
		printf("����\n");
		scanf("%d %d", &a, &b);
		printf("%d\n", sub(a, b));

		break;

	case 3:
		printf("����\n");
		scanf("%d %d", &a, &b);
		printf("%d\n",mul(a, b));
	
		break;

	case 4:
		printf("������\n");
		scanf("%d %d", &a, &b);
		printf("%d\n", div(a, b));

		break;

	case 5:
		printf("����\n");
		exit(0);
		break;
	}
}
int serch(int a) {

	if (0 < a && a < 6) {
		cho(a);
	}
	else {
		printf("1~5 ���̷� �Է��ϼ���\n");
		menu();
		
	}

}
int add(int a,int b) {
	int res = a + b;
	return res;
}
int sub(int a, int b) {
	int res = a - b;
	return res;
}
int mul(int a, int b) {
	int res = a * b;
	return res;
}
int div(int a, int b) {
	int res = a / b;
	return res;
}
