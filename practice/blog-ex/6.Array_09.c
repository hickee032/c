#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	//8.
	//1~45 �� ���ڸ� �������� �߻� ���� �ζ� ���α׷� �����

	int lotto[45];
	int sel[6];

	int compare[6];

	srand(time(NULL));

	//45������ �迭�� �ֱ�
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