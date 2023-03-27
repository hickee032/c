#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <stdlib.h> //rand() 함수 포함 라이브러리
int main() {
	/*1 ~45 랜덤 숫자 동일한 숫자여도 상관 없음*/
	//난수
	int random = 0;

	for (int i = 0; i < 6; i++)
	{
		random = rand() % 45+1;

		printf("%d\t", random);
	}



}