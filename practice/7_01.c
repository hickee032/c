#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	/*입력 받은수 만큼 hello world 출력

	int n = 0;

	scanf("%d", &n);

	while (n>0)
	{
		printf("Hello World\n"); 
		
		n--;
	}
	*/

	/*정수 입력 수 만큼 3의 배수 출력 5 입력 3 6 9 12 15

	int n = 0;
	int m = 3;
	int b = 1;
	scanf("%d", &n);

	while (n > 0)
	{
		printf("%d ", m*b);
		b++;
		n--;
	}
	*/

	/*계속해서 사용자로 부터 정수를 입력 받음 그 값을 계속 해서 더해감 0을 입력시 모든 합 출력
	
	int input = 0;
	int total = 0;

	while (1)
	{
		scanf("%d", &input);
		if (input == 0)
		{
			printf("총합은 %d\n", total);
		}
		else {
			total += input;

			//printf("합은 %d\n", total);
		}


	}
	*/

	/*구구단 단수 입력 단 역 순 출력

	int n = 0;
	int count = 9;
	scanf("%d", &n);

	while (count > 0)
	{
		printf("%d X %d = %d\n", n, count, n * count);
		count--;
	}
	*/

	//사용자로 부터 먼저 정수의 개수를 입력 받고 그 수 만큼 정수 입력후에 평균 을 출력

	int n = 0;
	

	int num = 0;
	int total = 0;

	scanf("%d", &n);  //정수의 개수

	int count = n;
	while (count >0)
	{
		scanf("%d", &num);

		total += num;

		count--;
	}
	printf("%f", (double)(total / n));






}