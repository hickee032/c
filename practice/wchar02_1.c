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

	wchar_t first[] = L"김박이최장";
	wchar_t mid[] =  L"바사아자차" ;
	wchar_t last[] =  L"가나다라마" ;

	wchar_t name[10][3];

	srand(time(0));
	wprintf(L"1번째 %c\n", first[rand() % 5]);
	wprintf(L"2번째 %c\n", mid[rand() % 5]);
	wprintf(L"3번째 %c\n", last[rand() % 5]);
	//wprintf(L"0번째 %c%c\n", wcscat(first[rand() % 5],last[rand() % 5]));
	//printf("strcat : %s", strcat(first[rand() % 5], last[rand() % 5]));

	
	for (int i = 0; i < 10; i++) {
		//printf("i 의 값 : %d\n", i);
		for (int j = 0; j < 3; j++) {

			

			if (j == 0) {
				//printf("j 0의 값 : %d\n", j);
				name[i][0] = first[rand() % 5];
			}
			if(j == 1) {
				//printf("j 1의 값 : %d\n", j);
				name[i][1]= mid[rand() % 5];
			}
			if(j == 2) {
				//printf("j 2의 값 : %d\n", j);
				name[i][2]= last[rand() % 5];
			}


		}

	}

	

	for (int i = 0; i < 10; i++) {

		printf("i 는 %d\n", i);
		wprintf(L"%c%c%c\n", name[i][0], name[i][1], name[i][2]);
		
		printf("\n");
	}

}

