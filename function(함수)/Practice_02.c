#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2. ���� 2���� ��Ģ������ �Է� �޾Ƽ� �����ϴ� ������ ���� */

int cal(int a, int b, char c);

int main() {

	int n, m, oper= 0;
	char s;


	scanf("%d %d %c", &n, &m, &s);

	printf("n�� �� : %d\t", n);
	printf("m�� �� : %d\t", m);
	printf("s�� �� : %c\n", s);

	oper = cal(n, m, s);

	printf("���갪 %d", oper);
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