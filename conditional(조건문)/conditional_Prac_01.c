#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*국어 영어 수학 점수를 입력 받고 합과 평균을 출력*/
	/*100~90 A .. 형태*/

	int kor = 0;
	int eng = 0;
	int math = 0;

	int total = 0;
	int avr = 0.0;
	char grade = ' ';

	printf("국어 점수 입력 => ");
	scanf("%d", &kor);
	printf("영어 점수 입력 => ");
	scanf("%d", &eng);
	printf("수학 점수 입력 => ");
	scanf("%d", &math);

	total = kor + eng + math;
	avr = total / 3;

	switch (avr/10)
	{
	case 10:
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	case 5:
		grade = 'E';
		break;

	default:
		grade = 'F';
		break;
	}

	printf("총점 : %d\n", total);
	printf("평균 : %d\n", avr);
	printf("학점 : %c\n", grade);






}