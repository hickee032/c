#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int BigNum(int a, int b, int c);
int smNum(int a, int b, int c);



int main() {
	//������ ���� �Է� �ް� ���� ū, ���� ���� �� -> �Լ� ����
	int n, m, l = 0;
	int b = 0;
	int s = 0;

	printf("������ ���� �Է��ϼ���\n");
	scanf("%d %d %d", &n, &m, &l);

	b = BigNum(n, m, l);
	s = smNum(n, m, l);


	printf("���� ū�� :%d\n", b);
	printf("���� ������ :%d\n", s);


}

//���� ū ��
int BigNum(int a, int b, int c) {
	int big = 0;
	
	if (a>b) {
		if (a>c) {
			big = a;
		}
		else {
			big = c;
		}
	}
	else {
		if (b>c) {
			big = b;
		}
		else {
			big = c;
		}
	}

	return big;

}
//���� ���� ��
int smNum(int a, int b, int c) {
	int small = 0;
	if (a<b) {
		if (a < c) {
			small = a;
		}
		else {
			small = c;
		}
	}
	else {
		if (b < c) {
			small = b;
		}
		else {
			small = c;

		}
	}

	return small;


}