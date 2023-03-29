//consol UI
#include "def.h"
#include <stdio.h>
#include <Windows.h>
//Windows.h 윈도우에서만 쓸수 있다 (표준에서 벗어남)
#include "cui.h"

void gotoxy(int x, int y) {
	COORD pos = { x,y };
	//win32 api
	//지정된 곳으로 커서를 이동
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void title() {

	int x = 5;
	int y = 0;

	gotoxy(x, y + 0); printf("■■■■■■■■■■■■■■■■■■■■■■■");
	gotoxy(x, y + 1); printf("■  A____A                                  ■");
	gotoxy(x, y + 2); printf("■ | 'ㅅ' |                                 ■"); 
	gotoxy(x, y + 3); printf("■ |っ　ｃ|                                 ■"); 
	gotoxy(x, y + 4); printf("■ |　　　|                                 ■");
	gotoxy(x, y + 5); printf("■ |　　　|                                 ■");
	gotoxy(x, y + 6); printf("■  U￣￣U                                  ■");
	gotoxy(x, y + 7); printf("■■■■■■■■■■■■■■■■■■■■■■■");
	
	gotoxy(x + 13, y + 2); printf("학사 관리 1.0");
	gotoxy(x + 13, y + 4); printf("날짜 : 22년 10월 11일");
	gotoxy(x + 13, y + 5); printf("작성자 : 윤종현");

	gotoxy(x, y + 10); printf("※ 메뉴 도움말 ※");
	gotoxy(x, y + 12); printf("▶ 학생 정보 입력 : 학생,교수,전공 과목을 입력합니다.");
	gotoxy(x, y + 14); printf("▶ 학생 정보 보기 : 학생,교수,전공 과목을 출력합니다.");
	gotoxy(x, y + 16); printf("▶ 학생 정보 수정 : 학생,교수,전공 과목을 수정합니다.");
	gotoxy(x, y + 16); printf("▶ 학생 정보 삭제 : 학생,교수,전공 과목을 삭제합니다.");
	gotoxy(x, y + 16); printf("▶ 학생 정보 검색 : 학생,교수,전공 과목을 검색합니다.");
	gotoxy(x, y + 16); printf("▶ 초기화 : 데이터를 삭제, 초기화합니다.");
	gotoxy(x, y + 18); printf("▶ 메뉴 이동은 아무키나 누르세요 ◀");
	
}
void set_cursot_type(CURSOR_TYPE type) {

	CONSOLE_CURSOR_INFO curinfo;
	//memset CURSOR_TYPE 정보를 0으로 초기화 하겠다.
	memset(&curinfo, 0, sizeof(curinfo));
	switch (type) {
	case NOCURSOR:
		curinfo.dwSize = 1;
		curinfo.bVisible = FALSE;
		break;
	case SOLID_CURSOR:
		curinfo.dwSize = 100;
		curinfo.bVisible = TRUE;
		break;
	case NORMAL_CURSOR:
		curinfo.dwSize = 20;
		curinfo.bVisible = TRUE;
		break;
	}
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curinfo);

}

//색 바꿈
void fontcolor(FONT_COLOR color) {
	//win32 api 표준이 아니다. 운영체제에 따라 다르다.
	SetConsoleTextAttribute(GetStdHandle( STD_OUTPUT_HANDLE), color);
}