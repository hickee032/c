#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�Է� ���� �����Ͽ� �� �հ踦 ���

static total = 0;

int AddToTaotal(int n);

int main() {

	int num, i;

	for ( i = 0; i < 3; i++) {
		printf("�Է� %d : ", i + 1);
		scanf("%d", &num);
		printf("���� %d\n", AddToTaotal(num));
	}
	return 0;
}

int AddToTaotal(int n) {
	total += n;
	return total;
}