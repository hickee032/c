#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int n = 0;
	int fac = 1;
	printf("���� 1���� �Է��ϼ���\n");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		fac *= i;
	}
	printf("%d", fac);

}