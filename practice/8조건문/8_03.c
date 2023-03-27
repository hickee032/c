#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 학생 전체의 평균 점수에 대한 학점 출력 3 가지 수 입력 받고 평균과 학점 출력*/

int main() {

	int a, b, c, total = 0;

	double avr = 0.0;

	scanf("%d %d %d", &a, &b, &c);

	total = a + b + c;

	avr = total / 3;

	if (90 <= avr && avr <= 100)
	{
		printf("%.2lf\n", avr);
		printf("%c\n", 'A');
	}
	else	if (80 <= avr)
	{
		printf("%.2lf\n", avr);
		printf("%c\n", 'B');
	}
	else 	if (70 <= avr)
	{
		printf("%.2lf\n", avr);
		printf("%c\n", 'C');
	}
	else 	if (60 <= avr)
	{
		printf("%.2lf\n", avr);
		printf("%c\n", 'D');
	}
	else {
		printf("%.2lf\n", avr);
		printf("%c\n", 'F');
	}


}

