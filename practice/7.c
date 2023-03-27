#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h> //자료형 MAX/MIN 을 보기 위한 함수를 포함한 라이브러리


int main(void) {

	int n = 5;
	double m = 10.5;

	//byte단위로 자료형 변수의 메모리 크기를 확인할수 있다.

	printf("변수 x의 메모리 크기는 %dByte\n", sizeof(n));
	printf("변수 y의 메모리 크기는 %dByte\n", sizeof(m));



	int x = INT_MAX;
	int y = INT_MIN;

	printf("int형의 최대값 x는 %d\n", x);
	printf("x+1은 %d\n", x + 1);

	printf("int형의 최소값 x는 %d\n", y);
	printf("y-1은 %d\n", y - 1);

	return 0;
}