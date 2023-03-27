#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 연산자 :: 프로그램의 산술식 및 연산식의 표현 및 처리를 위해 제공되는 기호
	// 산술 연산자 :: + - * / %
	printf("a는 1, b는 5\n");
	int a = 1;
	int b = 5;
	int result;
	// int a = 1, b = 5, result; a는 1, b는 5, 결과값인 result는 공백
	result = a + b;
	printf("덧셈 결과 : %d\n", result);  //덧셈 결과 : 6
	result = a - b;
	printf("뺄셈 결과 : %d\n", result);  //뺄셈 결과 : -4
	result = a * b;
	printf("곱셈 결과 : %d\n", result);  //곱셈 결과 : 5
	result = a / b;
	printf("몫 나눗셈 결과 : %d\n", result); //몫 나눗셈 결과 : 0
	result = a % b;
	printf("나머지 나눗셈 결과 : %d\n", result); // 나머지 나눗셈 결과 : 1

	// 산술 연산자와 대입 연산자를 합친 형태
	
	// += -= *- /= %=

	printf("number 초기값은 0, n은 4\n");
	int number = 0;
	int n = 4;
	number += n; // 덧셈+대입 합침 :: "number의 값에 n을 더해라"
	printf("<number+=n>의 결과 : %d\n", number); // 결과 : 4
	// number = number + n;과 같음
	number *= n; // 곱셈+대입의 합침 :: "number의 값에 n를 곱해라"
	printf("<number*=n의 결과 : %d\n", number); // 결과 : 16
	number -= n; // 뺄셈+대입의 합침 :: "number의 값에 n을 빼라"
	printf("<number-=n의 결과 : %d\n", number); // 결과 : 12
	number /= n; // 몫 나눗셈+대입의 합침 : "number의 값에 n을 / 연산해라"
	printf("<number/=의 결과 : %d\n", number); // 결과 : 3
	number %= n; // 나머지 나눗셈+대입의 합침 : "number의 값에 n을 % 연산해라"
	printf("<number%%=의 결과 : %d\n", number); // 결과 : 3 // %를 출력하려면 %%

	// 대입 연산자 :: = "같다"가 아닌 "대입"
	// 
	// 비교 연산자 :: < > <= >= ==(같다) !=(같지 않다)
	// if문
	// if(조건문) {명령문}*/ 조건문을 만족하면 명령문을 수행
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("num1 : %d\n", num1);
	printf("num2 : %d\n", num2);
	printf("num3 : %d\n", num3);
	if (num1 > num2)  // 비교연산자 num1이 num2보다 크다면 
	{				// 아래의 명령문을 실행하라
		printf("num1은 num2보다 큽니다.\n");
	}
	else if (num1< num2) //위의 if문을 만족하지 못하고 해당 조건을 만족하면,
	{					 //아래의 명령문을 실행하라
		printf("num1은 num2보다 작습니다.\n");
	}
	else            //위의 if문과 else if문들을 모두 만족하지 못할 시에 실행하는 명령문
	{
		printf("num1은 num2와 같습니다.\n");
	}

	if (num1 > num2 && num1 > num3) {

		// 논리 연산자 :: 그리고 &, &&, 또는 |, ||
		// && :: 첫번째 조건문이 거짓이라면 두번째 조건문 판별하지 않음.
		//		 해당 조건문에 걸린 명령문 실행하지 않음
		//		 (and 연산자는 둘 중 하나가 거짓이면 실행되지 않음)
		// || :: 첫번째 조건문이 참이라면 두번째 조건문 판별하지 않음
		//		 해당 조건문에 걸린 명령문 실행
		//		 (or 연산자는 둘 중 하나가 참이라면 실행)
		// &보다 &&가 더 성능이 좋다.
		// &, | :: 두개의 조건의 결과를 모두 판별함
		// &&, || :: 1개의 조건의 결과가 만족하지 못한다면, 바로 skip한다.
		//
											//num1이 num2보다 크고 num1이 num3보다 크다면,
		printf("num1이 가장 큽니다.\n");//2가지의 조건을 모두 만족해야 아래 명령문을 실행
	}
	else if (num2 > num1 && num2 > num3) {
		printf("num2가 가장 큽니다.\n");
	}
	else if (num3 > num1 && num3 > num2) {
		printf("num3이 가장 큽니다.\n");
	}
	else {
		printf("num1, 2, 3이 같습니다.\n");
	}

	// or(|, ||) 연산자
	if (num1 > num2 || num1 > num3) {
		printf("num1은 가장 작은 숫자가 아닙니다.\n"); // 2개의 조건 중 하나만 만족을 해도 해당 명령문 실행
	}

	// 
	// 증감 연산자 :: ++ --
	// 반복문
	//
}