#include <stdio.h>

int main() {

	//5.행렬의 덧셈
	//1~9까지의 행렬을 2차원 배열에 저장
	//10~90까지의 행렬을 2차원 배열에 저장
	//두 행렬을 덧셈하여 2차원 배열에 저장
	//11 22 33 -> 형태로 출력
	//44 55 66

	int arr1[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int arr2[3][3] = { {10,20,30},{40,50,60},{70,80,90} };

	int result[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {

			result[i][j] = arr1[i][j] + arr2[i][j];
		}

	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {

			printf("%d ", result[i][j]);
		}
		printf("\n");

	}



}