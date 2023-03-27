#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main() {
	/*
	7. 다음 메뉴를 가지는 프로그램 작성하기.
		---------------------------- -
		파일 제어 프로그램 v1.1
		---------------------------- -
		1. 이름 생성하여 파일에 저장하기
		2. 파일에서 이름 읽어오기
		3. 프로그램 종료
		---------------------------- -
		메뉴 선택 :

	조건1) 1차원 배열 초기값
		이름의 1번째-- > "김", "박", "이", "최", "장"
		이름의 2번째-- > "바", "사", "아", "자", "차"
		이름의 3번째-- > "가", "나", "다", "라", "마"



		조건2) 위의 값을 각각 랜덤하게 발생하도록 하여 50개의 풀네임을 생성하여
		배열에 저장.

		- 순서1) last에서 랜덤하게 1개의 배열 요소값을 선택
		- 순서2) first에서 랜덤하게 1개의 배열 요소값을 선택
		- 순서3) mid에서 랜덤하게 1개의 값을 선택
		- 순서4) 풀네임을 저장할 배열을 생성
		- 순서5) 랜덤하게 생성된 3개의 값들을 합쳐서 하나의 전체 이름으로 생성.



		조건3) 생성된 풀네임 50개를 파일에 저장.
		조건4) 파일에 저장된 이름들을 읽어서 출력할때는 라인별로 출력 바람.

	*/

	setlocale(LC_ALL, "");

	wchar_t first[] =  L"김박이최장" ;
	wchar_t mid[] = {L"바사아자차"};
	wchar_t last[] = { L"가나다라마" };

	wchar_t name[50][3];

	wprintf(L"first : %s\n", first);
	int len1 = wcslen(first);
	printf("문자열 길이 %d\n", len1);
	wprintf(L"0번째 %c\n", first[0]);
	
	srand(time(0));
	printf("랜덤 숫자 0~ 5\n");
	printf("ran : %d\n", rand() % 5);
	printf("ran : %d\n", rand() % 5);
	printf("ran : %d\n", rand() % 5);
	printf("ran : %d\n", rand() % 5);
	printf("ran : %d\n", rand() % 5);


	printf("-------------------\n");
	
	wprintf(L"mid : %s\n", mid);
	printf("-------------------\n");

	wprintf(L"last : %s\n", last);
	printf("-------------------\n");




}

