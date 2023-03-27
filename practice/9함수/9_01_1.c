#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int BigNum(int a, int b, int c);
int smNum(int a, int b, int c);



int main() {
	//세가지 수를 입력 받고 가장 큰, 가장 작은 수 -> 함수 구현
	int n, m, l = 0;
	int b = 0;
	int s = 0;

	printf("세가지 수를 입력하세요\n");
	scanf("%d %d %d", &n, &m, &l);

	b = BigNum(n, m, l);
	s = smNum(n, m, l);


	printf("가장 큰수 :%d\n", b);
	printf("가장 작은수 :%d\n", s);


}

//가장 큰 수
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
//가장 작은 수
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