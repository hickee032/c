#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0;

	printf("���ڸ� �Է� 1 ~ 3: ");
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

A: printf("%d �� AAAAA\n",n);
	goto END;

B: printf("%d �� BBBBB\n",n);

C: printf("%d �� CCCCC\n",n);

END: printf("���α׷� ����\n");
	return 0;
}