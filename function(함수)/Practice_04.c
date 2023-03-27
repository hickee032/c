#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*4. 국 영 수를 입력 받아서 총점, 평균 값을 구하는 프로그램
입력 받는 점수는 0~ 100 사이의 숫자만 입력 (조건체크 잘못 입력시 에러 출력
국영수 점수를 각 각 매개변수로 전달 총점 평균을 출력하는 함수
실수로 입력시 재입력*/

int Tscore(int a, int b, int c);
double avr(Tscore);

int main() {

	int kor, eng, math, total = 0;
	double avrg = 0.0;
	double avrg1 = 0.0;
	
	while (1)
	{
		printf("국어 점수를 입력하세요\n");
		scanf(" %d", &kor);
		printf("영어 점수를 입력하세요\n");
		scanf(" %d", &eng);
		printf("수학 점수를 입력하세요\n");
		scanf(" %d", &math);

		//입력 값 출력
		//printf("국어 : %d 영어 : %d 수학 : %d\n", kor, eng, math);

		if ((0 <= kor && kor <= 100) && (0 <= eng && eng <= 100) && (0 <= math && math <= 100))
		{
			total = Tscore(kor, eng, math);

			avrg = avr(kor, eng, math);

			avrg1 = avr1(Tscore(kor, eng, math));

			printf("avr1 : %f\n", avrg1);

			printf("총점은 : %d\n", total);
			printf("평균은 : %.2f\n", avrg);
			break;
		}
		else
		{
			printf("점수를 잘못 입력했습니다.\n");
			printf("다시입력 하세요.\n"); 
			
		}
		printf("\n");
	}



}

int Tscore(int a, int b, int c) {
	int sum = a + b + c;
	printf("sum : %d\n", sum);
	return sum;
}

double avr(int a, int b, int c) {

	double avrg = ((a + b + c) / 3);
	printf("avrg 값 : %.2f\n", avrg);
	return avrg;
}

double avr1(Tscore) {

	double avrg = (Tscore / 3);
	printf("avrg 값 : %.2f\n", avrg);
	return avrg;
}
