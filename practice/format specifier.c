#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	/*진수 계산 
	서식지정자로 출력 */

	int n = 0;
	int bina = 0; // 진수 입력

	printf("바꿀 10진수를 입력하세요 : ");
	scanf("%d", &n);

	printf("몇 진수로 바꿀것인지 입력하세요 : ");
	scanf("%d", &bina);

	if (bina ==16)
	{
		printf("%x", bina);
	}
	if (bina==8)
	{
		printf("%o", bina);
	}
	//2진수는 서식지정자가 없다. 직접 정의 해서 사용해야한다.
}