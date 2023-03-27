#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*3. 홀수와 짝수를 구분하는 프로그램
	10개의 저장을 위한 배열 생성
	배열에 랜덤값 저장*/

void oddeven(int arr[10]);

int main() {

	int arr[10] = { 20,21,34,4,3,85,63,6,9,75 };

	oddeven(arr);
}

void oddeven(int arr[10]) {

	printf("짝수는 ");
	for (int i = 0; i < 10; i++)
	{
		if (arr[i]%2 ==0)
		{
			printf("%d ",arr[i]);
		}
	}
	printf("\n");
	printf("홀수는 ");
	for (int j = 0; j < 10; j++)
	{
		if (arr[j] % 2 != 0)
		{
			printf("%d ", arr[j]);

		}
	}
	


}