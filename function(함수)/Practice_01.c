#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 함수 연습 */

/*1.3개의 숫자를 입력 받아서 큰수부터 차례로 정렬
	배열 사용 금지,정렬 알고리즘 금지 */


void compare(int a, int b, int c);

int main() {
	//C p212 p214 p218

	int n, m, s = 0;


	scanf("%d %d %d", &n, &m, &s);

	printf("n의 값 : %d\t", n);
	printf("m의 값 : %d\t", m);
	printf("s의 값 : %d\n", s);

	compare(n, m, s);
}

void compare(int a, int b, int c) {
	
	int comp_a = 0; //가장 큰수
	int comp_b = 0; //중간 수
	int comp_c = 0; //가장 작은수 

	if (a > b)
	{
		if (a>c)
		{
			if (b>c)
			{
				comp_a = a;
				comp_b = b;
				comp_c = c;
			}
			else
			{
				comp_a = a;
				comp_b = c;
				comp_c = b;
			}
			
		}
		else
		{
			comp_a = c;
			comp_b = a;
			comp_c = b;
		}
	}
	else
	{
		if (b>c)
		{
			if (a>c)
			{
				comp_a = b;
				comp_b = a;
				comp_c = c;
			}
			else
			{
				comp_a = b;
				comp_b = c;
				comp_c = a;
			}

		}
		else
		{
			comp_a = c;
			comp_b = b;
			comp_c = a;
		}




	}



	printf("%d %d %d", comp_a,comp_b,comp_c);
}