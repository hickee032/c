#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int h = 0, m = 0;

	scanf("%d %d", &h, &m);

	m -= 45;
	
	if (m > 0) {
		printf("%d %d", h, m);
	}
	else if (m < 0) {
		h -= 1;
		if (h<0) {
			h += 24;
		}
		m += 60;
		printf("%d %d", h, m);
	}
	else {
		printf("%d %d", h, m);
	}
}

