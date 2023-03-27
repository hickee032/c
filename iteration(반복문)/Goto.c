#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0;

	printf("숫자를 입력 1 ~ 3: ");
	scanf("%d", &n);

	if (n == 1)
	{
		goto A;
	}
	else if(n ==2)
	{
		goto B;
	}
	else
	{
		goto C;
	}

A: printf("%d 번 AAAAA\n",n);
	goto END;

B: printf("%d 번 BBBBB\n",n);

C: printf("%d 번 CCCCC\n",n);

END: printf("프로그램 종료\n");
	return 0;
}