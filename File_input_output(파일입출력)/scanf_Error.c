#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n1, n2;
	char ch;
	printf("숫자 1 입력 : ");
	scanf("%d", &n1);
	printf("숫자 2 입력 : ");
	scanf("%d", &n2);
	printf("문자 입력 : "); //문자 입력 스페이스 안쓰면 넘어감
	scanf(" %c", &ch);

}