#include <stdio.h>

int main() {
	//2.
	// 1~ 100까지의 수를 1차원 배열에 저장
	//5의 배수만 출력
	//배열의 위치가 90번째 일떄 출력을 중지

	int arr[100];

	for (int i = 1; i <= 100; i++)
	{
		arr[i - 1] = i;
	}

	for (int j = 0; j <= 89; j++)
	{
		if (arr[j] % 5 == 0) {
			printf("%d\n", arr[j]);
		}
	}
}