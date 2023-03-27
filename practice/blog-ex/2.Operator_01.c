#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* 1개의 숫자 입력 받아서 홀수 짝수인지 확인
		삼항 연산자 사용*/
	int input = 0;
	int n = 0;

	printf("숫자를 입력 하세요 : ");
	scanf("%d", &input);
	//printf("input : %d", input);

	n = input % 2 == 0 ? 2 : 1;

	if (n==2)
	{
		printf("짝수 입니다.");
	}
	else
	{
		printf("홀수 입니다.");
	}
}