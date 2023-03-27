#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int a,b,total = 0;
	printf("두개의 정수를 입력하세요 \n");
	scanf("%d %d", &a, &b);

	if (a>b)
	{
		printf("두번째 수가 첫번쨰 수 보다 커야 합니다.");
	}
	else
	{
		for (int i = a; i < b+1; i++)
		{
			total += i;
		}
	}

	printf("%d", total);
	


}