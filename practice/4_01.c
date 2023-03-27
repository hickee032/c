#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	//입력 받은 정수값의 부호를 바꿔서 출력 - 비트연산자 사용

	int n = 0;

	scanf("%d", &n);

	int m = ~ n;

	printf("%d\n", m+1);

	//3X8/4 연산자 *, / 사용하지 않고 표현
		//비트의 열을 왼쪽으로 1칸 이동시마다 정수의 값은 2배 ( * )
		//비트의 열을 오른쪽으로 1칸 이동시마다 정수의 값은 2로 나뉘어진다. ( / )

	int a = 3;
	int b = a << 3;
	
	printf("%d\n", b>>2);
}

