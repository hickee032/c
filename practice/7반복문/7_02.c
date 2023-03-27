#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*정수 5개 입력받는다. 정수는 반드시 1이상 1미만의 수다. 잘못 입력 될 경우 재 입력 요구 while문 만 사용
	-> 한번씩 입력이다 한꺼번에 입력이 아니라 */

int main() {

	int count = 5;
	int n = 0;
	int total = 0;

	while (count > 0)
	{
		scanf("%d", &n);
		//printf("n은 %d",n);

		while (n>0)
		{
			total += n;
			//printf("total은 %d\n", total);
			count--;
			break;
		}

		while (n<=0)
		{
			printf("다시 입력\n");
			break;
		}
	
	}
	printf("총합 : %d", total);
}

