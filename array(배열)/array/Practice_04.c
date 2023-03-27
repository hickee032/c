#include <stdio.h>
int main() {
	//4.이차원 배열의 출력
	//{{1,2},{2,4,6},{3,6}{4,8,10,12}{10}}
	//arr[0][0] = 1 arr[0][1] = 2 형태로 출력

	int arr[5][4] = { {1,2},{2,4,6},{3,6} ,{4,8,10,12} ,{10} };

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++) {
			if (arr[i][j] !=0)
			{
				printf("arr[%d][%d] = %d\t", i, j, arr[i][j]);
			}
			
		}
		printf("\n");
	}


}