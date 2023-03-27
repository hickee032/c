#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//이중포인터
//포인터의 메모리 주소를 저장하는 포인터의 포인터
//포인터를 선언 할떄 **을 사용하면 포인터의 포인터(이중포인터)

/*
int main() {
	int* numPtr1; //단일 포인터
	int** numPtr2;//이중 포인터
	int num1 = 10;

	numPtr1 = &num1; //numPtr1 에 num1의 메모리 주소 저장
	numPtr2 = &numPtr1; //numPtr2 에 numPtr1의 메모리 주소 저장

	printf("%d\n", **numPtr2);
	//포인터를 두번 역참조하여 num1의 메모리 주소에 접근

}
*/

/*포인터도 실제로는 변수이기 때문에 메모리 주소를 구할수 있다.
포인터의 메모리 주소는 일반 포인터에 저장할수 없다

>> int** numPtr2; 와 같은 이중포인터에 저장
>> numPtr2 -> numPtr1 ->num1

포인터를 선언할떄 * 의 개수에 따라 삼중 포인터, 사중 포인터 그 이상도 
만들수 있다.
*/

//포인터 사용시 주의 할 점
//포인터는 메모리 주소를 저장하는 용도이다
//>> 값을 저장하면 안됨

int main() {

	int* numPtr = 0x100; //포인터에 0x100을 직접 저장

	printf("%d\n", *numPtr); //0x100는 잘못된 메모리 주소 실행 에러

}

//*numPtr = 0x100; 같이 직접 저장했을 때 
//					메모리에서 0x100은 잘못된 주소값

실제로 존재하는 메모리 주소 라면 저장할 수 있다.

int* numPtr = 0x00CCFC2C;

