#include "def.h"
#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include "cui.h"
#include "menu.h"
#include "haksa.h"
#include "util.h"
#include "file_util.h"

int main() {

	//ShowWindow(GetConsoleWindow(), SW_MAXIMIZE); 콘솔창 윈도우 최대크기로 설정
	//GetConsoleWindow() 콘솔창의 정보를 얻는 다.
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	fontcolor(LIGHT_CYAN); //폰트색깔
	set_cursot_type(NOCURSOR); //커서를 안보이게
	title();
	_getch();//잠시 대기 상태
	system("cls");  //외부 파일을 실행 - 콘솔을 초기화
	fontcolor(14);
	set_cursot_type(NORMAL_CURSOR); //일반 커서로 복원

	//ger_time();
	//메인 메뉴
	while (1) {
		switch (main_menu()) {
		case MA_INPUT:
			printf("데이터 입력\n");
			std_lecture_input();
			break;	
		case MA_SHOW:
			printf("데이터 출력\n");
			//std_enrolment();
			fileRead();
			break;
		case MA_UPDATE:
			printf("데이터 수정\n");
			fileChange();
			break;
		case MA_DELETE:

			printf("데이터 삭제\n");
			char name[20] = { 0, };
			printf("삭제할 이름 입력");
			scanf("%s", name);
			lect_delete(name);
			//fileDelete();
			break;
		case MA_SEARCH:
			printf("데이터 검색\n");
			fileSearch();
			break;
		case MA_INIT:
			printf("데이터 초기화\n");
			fileInit();
			break;
		case MA_EXIT:
			printf("프로그램을 종료합니다.\n");
			exit(0);
			break;
		case MA_PRODATA:
			printf("무작위로 데이터를 생성합니다.");
			int n = 0;
			printf("생성할 데이터 개수를 입력\n");
			printf("1~100까지\n");
			scanf("%d", &n);
			dataProd(n);
			break;
		default :
			printf("잘못 입력하셨습니다.\n");
			printf("1~7 숫자만 입력하세요\n");
			rewind(stdin);
		}
		system("pause"); //일시정지
		system("cls");
	}
	
}