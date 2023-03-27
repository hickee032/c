#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*두개의 정수를 입력 받아서 두수의 차를 출력 무조건 큰수에서 작은수를 뺴야함 출력 결과는 - 가 될수 없다*/

int main() {

	int n,m = 0;

	scanf("%d %d", &n, &m);

	if (n>m)
	{
		printf("%d\n", n - m);
	}
	else
	{
		printf("%d\n", m - n);
	}

	/*삼항 연산자*/

	int result = 0;

	result = n > m ? (n - m) : (m - n);

	printf("result : %d\n", result);

}

