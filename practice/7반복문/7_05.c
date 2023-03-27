#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int n = 2; //´Ü¼ö
	int m = 1;


	do
	{
		while (m<10)
		{
			printf("%d * %d = %d\n", n, m, n * m);
			m++;
		}
		n++;
		printf("\n");
		m = 1;
	} while (n<10);
}