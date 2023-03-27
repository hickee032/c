#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int input = 0;
	printf("정수를 입력하세요\n");
	scanf("%d", &input);

	fibona(input);
}

int fibona(int n) {

	int n1 = 1;
	int n2 = 1;
	int fibo = 0;

	if (n == 0) {

		fibo = 0;
	}
	else if(n == 1) {
		fibo = n2;
	}
	else {

		for (size_t i = 0; i < n; i++) {
	
			n1 = n2;
			n2 = fibo;
			printf("%d ", fibo);
			fibo = n1 + n2;
		}
	}
	return fibo;
}
