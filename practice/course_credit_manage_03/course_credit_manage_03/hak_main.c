#include "def.h"
#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include "cui.h"
#include "menu.h"
#include "haksa.h"
#include "file_util.h"
#include "util.h"
#include "output_print.h"


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
		case 0:
			
			break;
		}
		system("pause"); //일시정지
		system("cls");
	}
	
}