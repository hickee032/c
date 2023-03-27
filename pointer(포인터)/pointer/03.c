#include <stdio.h>

/*
void 포인터
자료형이 정해지지 않은 포인터 
void * 포인터 이름
*/
/*
int main() {
	int num1 = 10;
	char c1 = 'a';
	int* numPtr1 = &num1;
	char* cPtr1 = &c1;

	void* ptr; // void 포인터 선언

	//포인터 자료형이 달라도 컴파일 경고가 없음
	ptr = numPtr1;
	printf("numPtr1 : %p\n", numPtr1);
	printf("ptr1 : %p\n", ptr);

	ptr = cPtr1;
	printf("cPtr : %p\n", cPtr1);
	printf("ptr : %p\n", ptr);

	numPtr1 = ptr;
	cPtr1 = ptr;
	*/
	/*
		void 포인터는 자료형이 정해지지 않은 특성을 가짐
			이 특성으로 인해 어떤 자료형 포인터라도 다 저장할 수 있다.
			반대로 어떤 자료형 포인터에도 void 포인터를 저장할 수 있다.
			>> void포인터를 범용 포인터라고 한다.
				(직접 자료형을 변환하지 않아도 암시적으로 자료형이 변환함)
	*/

	/*
			주의 : void 포인터는 자료형이 정해지지 않았다 그러므로 값을 가져오거나
			저장할 크기도 정해지지 않음
			>> void 포인터는 역참조를 할 수 없다.
	*/
/*
	ptr = numPtr1;
	printf("%d", *ptr); //컴파일 에러 void 포인터는 역참조 할 수 없음

	ptr = cPtr1;
	printf("%c", *ptr); //컴파일 에러 void 포인터는 역참조 할 수 없음
	//C2100	간접 참조가 잘못되었습니다.

	void v1; //void 는 변수를 선언할수 없다
	//컴파일 에러 C2182 'v1': 'void' 형식을 잘못 사용했습니다.

	void 포인터의 사용
		>> 함수에서 다양한 자료형을 받을 때 
		>> 함수의 반환 포인터를 다양한 자료형으로 된 포인터에 저장할때
		>> 자료형을 숨기고 싶을때 사용
}
*/