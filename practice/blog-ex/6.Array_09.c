#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	//8.
	//1~45 의 숫자를 랜덤에게 발생 시켜 로또 프로그램 만들기

	int lotto[45];
	int sel[6];

	int compare[6];

	srand(time(NULL));

	//45번까지 배열에 넣기
	for (int i = 1; i <= 45; i++) {
		lotto[i - 1] = i;
	}
	for (int j = 0; j < 6; j++) {
		sel[j] = lotto[rand() % 45];
	}


	for (int i = 0; i < 6; i++) {
		for (int j = 1; j < 6; j++) {
			if (sel[i] == sel[i + 1]) {
				sel[i] = lotto[rand() % 45];
			}

		}
	}


	for (int j = 0; j < 6; j++) {
		printf("%d, ", sel[j]);
	}


}