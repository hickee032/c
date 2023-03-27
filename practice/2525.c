#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int h = 0, m = 0, t = 0;

	scanf("%d %d", &h, &m);
	scanf("%d", &t);

	m += t;

	if (m >= 60) {
		h += (m / 60);
		if (m%60 ==0) {
			m = 0;
		}
		else {
			m = m % 60;
		}
	}

	if (h==24) {
		h = 0;
	}
	if (h>24) {
		h -= 24;
	}

	printf("%d %d", h, m);

}