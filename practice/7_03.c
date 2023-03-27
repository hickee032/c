#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int count = 0;
	int n = 0;
	int m = 1;

	while (count < 5)
	{
		while (n <= count )
		{
			printf("o");
			n++;
		}
		printf("*");
		count++;
	}



}