#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*1이상 100미만의 정수 7의 배수와 9의 배수를 출력 7의 배수이면서 9의 배수인 정수는 한번만 출력 */

int main() {

	for (int i = 1; i < 100; i++)
	{
		if (i%7==0)
		{
			printf("%d, ", i);
		}
		else if(i%9==0)
		{
			printf("%d, ", i);
		}
	}
	printf("\n");
}

