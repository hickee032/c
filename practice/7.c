#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h> //�ڷ��� MAX/MIN �� ���� ���� �Լ��� ������ ���̺귯��


int main(void) {

	int n = 5;
	double m = 10.5;

	//byte������ �ڷ��� ������ �޸� ũ�⸦ Ȯ���Ҽ� �ִ�.

	printf("���� x�� �޸� ũ��� %dByte\n", sizeof(n));
	printf("���� y�� �޸� ũ��� %dByte\n", sizeof(m));



	int x = INT_MAX;
	int y = INT_MIN;

	printf("int���� �ִ밪 x�� %d\n", x);
	printf("x+1�� %d\n", x + 1);

	printf("int���� �ּҰ� x�� %d\n", y);
	printf("y-1�� %d\n", y - 1);

	return 0;
}