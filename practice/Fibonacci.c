#include <stdio.h>

int Fibonacci(int n) {
	int count = 0;
	int a = 0;
	int b = 1;
	int c = 0;

	while (count != n) {
		a = b;
		b = c;
		c = a + b;
		count++;
	}
	return c;
}

int main() {

	int input = 0;
	scanf("%d", &input);
	printf("%d", Fibonacci(input));
	
}
