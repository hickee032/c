#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//재귀 원래 자리로 되돌아옴 
//재귀 함수 
//팩토리얼 문제 입력한수에 대하여 팩토리얼 값 구하기;

/*
함수원형 반환형(자료형) 함수이름(매개변수) {
	실행할 명령문
}
*/


int factorial(int num) {

	static int total = 1;

	if (num != 0) {
		total *= num;
		return factorial(num-1);
	}
	else {
		return total;
	}
	
}

int main() {
	
	int n;

	scanf("%d", &n);

	printf("%d", factorial(n));
}