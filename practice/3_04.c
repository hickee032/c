#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//두개의 정수 몫 나머지 7 -> 몫 3 나머지 1

int main() {

	int a = 0;
	int b = 0;

	scanf("%d %d", &a, &b);

	printf("몫 : %d 나머지 : %d\n", a/b,a%b);
}