#include <stdio.h>

int main() {

	//6.�������� ����� 2���� �迭�� ���� 
		//������� ���� ���� 2���� �迭
		//2x1=2 3x1=3 ����
	//9 8

	int arr[9][8] = { 0, };
	for (int i = 1; i <= 9; i++) {
		for (int j = 2; j <= 9; j++) {

			arr[i - 1][j - 2] = i * j;
		}
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 8; j++) {

			printf("%d X %d = %d\t", j + 2, i + 1, arr[i][j]);
		}
		printf("\n");
	}


}