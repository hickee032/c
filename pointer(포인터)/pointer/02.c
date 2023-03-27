
#include <stdio.h>

//다양한 자료형의 포인터
/*
int main() {

	long long* numPtr1;
	float* numPtr2;
	char* cPtr1;

	long long num1 = 10;
	float num2 = 3.5f;
	char c1 = 'a';

	numPtr1 = &num1;
	numPtr2 = &num2;
	cPtr1 = &c1;

	printf("%lld\n", *numPtr1); //10
	printf("%f\n", *numPtr2);	//3.500000
	printf("%c\n", *cPtr1);		//a

	c언어의 자료형은 포인터로 만들수 있다.
		메모리의 공간을 참조하는 기준이 된다.
	자료형마다 포인터를 선언하게 만든이유는
		포인터에 저장되는 메모리 주소값은 정수형으로 동일하지만 
		선언하는 자료형에 따라 메모리에 접근하는 방법이 달라짐

		포인터를 역참조하면 선언한 자료형의 크기에 맞춰서 값을 가져오거나 저장
	
	>> long long 포인터는 8바이트크기 만큼 값을 가져오거나 저장 
	>> char 포인터는 1바이트크기 만큼 값을 가져오거나 저장

	long long *numPtr1; //long long 포인터
	char c1;

	c1 = *numPtr1; //변수 자료형과 포인터를 역참조한 자료형이 다름 
}
*/


//상수 그리고 포인터
//포인터에도 const 를 붙일 수 있다. const위치에 따라 특성이 달라짐
/*
상수를 가리키는 포인터
int main() {
	const int num1 = 10; //int 상수
	const int* numPtr;	//int형 상수를 가리키는 포인터 (int const *numPtr 와 같다.)

	numPtr = &num1;
	*numPtr = 20;  //컴파일 에러 num1이 상수이므로 변경할 수 없음

	num1 이 const int 이므로 이 변수의 포인터는 const int * 로 선언해야함
	numPtr(num1의 주소를 가지고 있음)의 값을 역참조로 변경하려고 해도 
	num1은 상수이므로 컴파일 에러가 발생 >> 메모리 주소에 저장된 값을 
	변경 할수가 없다.
}
*/

/*
포인터 자체가 상수 >> * 뒤에 const 가 붙임
int main() {
	int num1 = 10;
	int num2 = 20;

	int* const numPtr = &num1;
	numPtr = &num2; //컴파일 에러 포인터(메모리주소)를 변경할 수 없음 

	numPtr 에 num1의 주소가 들어 있는 상태에서 다시 num2의 주소를 넣으려고 하면 
	컴파일 에러가 발생 
	numPtr은 포인터 자체가 상수이므로 다른 포인터(메모리 주소)를 할당할 수 없다
	* const 는 메모리 주소를 변경할수 없다

}
*/
/*
포인터가 상수이면서 상수를 가리키는 상태 >>포인터를 선언하는 자료형에도 const를 
붙이고 * 뒤에도 const붙임


int main() {

	const int num1 = 10;
	const int num2 = 20;

	const int* const numPtr = &num1;

	*numPtr = 30;	//컴파일 에러 num1이 상수이므로 역참조 값을 변경할 수 없음
	numPtr = &num2;	//컴파일 에러 포인터(메모리 주소) 변경할 수 없음

	numPtr 을 역참조한 뒤 값을 변경하려고 해도 num1 은 상수이므로 컴파일 에러
	numPtr 자체도 상수이므로 num2 의 주소를 넣으려고 하면 컴파일 에러
	const * const 는 주소, 저장된 값 모두 변경 할 수 없다.
}
*/