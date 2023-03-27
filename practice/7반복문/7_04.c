#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int n = 0;
	int total = 0;

	do
	{
		if (n % 2 == 0)
		{
			total += n;
		}
		n++;		
		//printf("n의 값 : %d\n", n);
	} while (n<101);
	printf("total 의 값 : %d\n", total);
}