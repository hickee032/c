#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	/*두 가지의 참(1) 또는 거짓(0)이 입력될 때,
		참/거짓이 서로 다를 때에만 참을 출력하는 프로그램을 작성해보자. 
		=> XOR 배타적 논리합*/

	//1 또는 0의 값만 가지는 2개의 정수가 공백을 두고 입력된다.
	// 1 1 -> 0 출력
	int n = 0;
	int m = 0;


	scanf("%d %d", &n,&m);

	printf("%d", n ^ m);

}