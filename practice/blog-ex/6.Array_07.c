#include <stdio.h>

int main() {

	//6.구구단의 결과를 2차원 배열에 저장 
		//결과값을 따로 저장 2차원 배열
		//2x1=2 3x1=3 형태
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