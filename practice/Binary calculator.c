#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	/* 진수 계산기
	   진수 입력 받고 숫자 입력 받고 진수출력 */

	int n = 0;
	int bina = 0; // 진수 입력

	printf("바꿀 10진수를 입력하세요 : ");
	scanf("%d", &n);

	printf("몇 진수로 바꿀것인지 입력하세요 : ");
	scanf("%d", &bina);



	int arr[20];

	int count = 0;

	while (1)
	{
		if (count > 0)
		{
			n = n / bina;
			//printf("n의 값의 변화 확인 : %d\n", n);
		}

		arr[count] = n % bina;

		if (n == 0) {
			break;
		}

		count++;
	}
	//printf("count 값 확인  : %d\n", count);

	for (int i = 0; i < count; i++)
	{
		//printf("arr[%d] : %d\n", i, arr[i]);

		if (arr[i] >= 10) // 10 11 12 13 14 15 
		{
			arr[i] = 65 + (arr[i] % 10);
		}
	}

	printf("\n");

	for (int j = count - 1; j >= 0; j--)
	{
		if (arr[j] > 64)
		{
			printf("%c", (char)(arr[j]));
		}
		else
		{
			printf("%d", arr[j]);
		}


		//printf("j의 값 확인  : %d\n", j);
	}




}