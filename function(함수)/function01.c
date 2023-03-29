#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int opration(int a, int b, char n);
void opration2(int a, int b, char n, int res);
void opration3(int a, int b, char n, int *res);

int main() {

	//포인터와 변수

	char ch = 'A';

	char* p = NULL;
	p = &ch; // 주소값을 대입
			 //char* p = &ch;

	printf("ch가 가지는 값 : %c\n", ch);
	printf("ch 주소 값 : %p\n", &ch);
	printf("p가 가지는 값 : %p\n", p);
	printf("p가 참조하는 주소의 데이터 값 : %c\n", *p);

	//포인터 변수 p = 주소(참조하는 ) 
	//			*p = 데이터 값
	// ch와 *p는 동일한 정보를 가지고 있다.
	
	//포인터와 배열
	int arr[] = { 10,20,30,40 };
	int* pArr = arr;
	//배열의 이름은 주소를 가지고 있다 &(주소연산자)를 쓰지 않는 다.

	printf("pArr[0] = %d\n", pArr[0]);
	//배열처럼 사용할 수 있다.
	printf("*pArr = %d\n", *pArr);
	//주소 참조 이후에 *이 붙게되면 값 *이 없으면 주소
	printf("*(pArr + 0) = %d\n", *(pArr + 0));

	printf("*(pArr + 2) = %d\n", *(pArr + 2));

	int num1 = 0, num2 = 0;
	char op = 0;
	printf("숫자를 입력하세요\n");
	scanf("%d %d", &num1, &num2);
	printf("연산자를 입력\n");
	scanf(" %c", &op);

	printf("opration 결과 : %d\n", opration(num1, num2, op));

	int result = 0;

	opration2(num1, num2, op, result);

	printf("main result : %d\n", result);


	opration3(num1, num2, op, &result); //매개변수가 *int res 주소값을 필요 &을 붙여줌
	
}

int opration(int a, int b, char n) {

	int result = 0;

	if (n =='+') {
		result = a + b;
	}
	else if(n == '-') {
		result = a - b;
	}
	else if (n == '*') {
		result = a * b;
	}
	else if (n == '/') {
		result = a / b;
	}
	else {
		printf("연산자가 아님");
	}
	return result;
	
}

void opration2(int a, int b, char n, int res) {

	if (n == '+') {
		res = a + b;
		printf("opration2 안에 res 값 : %d\n", res);
	}
}


//함수에서 사용되는 변수의 값을 가지기 위해서는 return, 그리고  * 포인터 변수를 사용해야한다.
void opration3(int a, int b, char n, int *res) { // int *res 에는 주소값이 들어와야함 

	if (n == '+') {
		*res = a + b;
		printf("opration2 안에 res 값 : %d\n", *res);
	}

}

