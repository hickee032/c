#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*두개의 수를 입력
	첫번째 수는 시작 두번째수는 끝 첫번째 부터 두번째까지의 합*/
	int fir = 0;
	int sec = 0;
	int sum = 0;

	printf("첫번째 수를 입력 : ");
	scanf("%d", &fir);
	printf("두번째 수를 입력 : ");
	scanf("%d", &sec);

	if (sec<=fir)
	{
		printf("오류발생\n");
		printf("두번째 수를 입력 : ");
		scanf("%d", &sec);
	}

	for ( int i = fir;  i <= sec;  i++)
	{
		sum += i;
	}

	printf("%d에서 %d까지의 합 : %d", fir, sec, sum);

}