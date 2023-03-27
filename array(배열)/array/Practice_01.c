#include <stdio.h>

int main() {

	//1.
	// 1차원 배열의 합, 평균 출력
	// 20 34 22 14 36 23 67 -> 7

	int arr[7] = { 20, 34, 22, 14, 36, 23, 67 };
	int sum = 0;
	double avr = 0.0;

	/*sizeof(arr) / sizeof(int)
	  sizeof(arr) 4byte * 7 = 28
	  sizeof(int) 4byte ----> 배열의 길이*/

	int szarr = sizeof(arr) / sizeof(int);

	for (int i = 0; i < szarr; i++)
	{
		sum += arr[i];
	}
	avr = sum / szarr;
	printf("합 %d\n : ", sum);
	printf("평균 %lf\n: ", avr);

	//2.
	// 1~ 100까지의 수를 1차원 배열에 저장
	//5의 배수만 출력
	//배열의 위치가 90번째 일떄 출력을 중지
}