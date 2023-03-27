#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int n = 0;
	int fac = 1;
	printf("정수 1개를 입력하세요\n");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		fac *= i;
	}
	printf("%d", fac);

}