#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2. 숫자 2개와 사칙연산을 입력 받아서 동작하는 간단한 계산기 */

int cal(int a, int b, char c);

int main() {

	int n, m, oper= 0;
	char s;


	scanf("%d %d %c", &n, &m, &s);

	printf("n의 값 : %d\t", n);
	printf("m의 값 : %d\t", m);
	printf("s의 값 : %c\n", s);

	oper = cal(n, m, s);

	printf("연산값 %d", oper);
}

int cal(int a, int b, char c) {

	int result = 0;

	if (c =='+')
	{
		result = a + b;
	}
	if (c == '-')
	{
		result = a - b;
	}
	if (c == '*')
	{
		result = a * b;
	}
	if (c == '/')
	{
		result = a / b;
	}

	return result;

}