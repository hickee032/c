#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int a, int b) {
	if (a % b == 0) {
		return b;
	}

	return gcd(b, a % b);
}

int lcm(int a, int b) {

	return (a * b) / gcd(a, b);
}

int main() {
	int a = 0;
	int b = 0;

	scanf("%d %d", &a, &b);

	printf("%d\n", gcd(a, b));
	printf("%d\n", lcm(a, b));

}
