#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//입력 값을 누적하여 그 합계를 출력

static total = 0;

int AddToTaotal(int n);

int main() {

	int num, i;

	for ( i = 0; i < 3; i++) {
		printf("입력 %d : ", i + 1);
		scanf("%d", &num);
		printf("누적 %d\n", AddToTaotal(num));
	}
	return 0;
}

int AddToTaotal(int n) {
	total += n;
	return total;
}