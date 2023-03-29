#ifndef __MENU_H__
#define __MENU_H__

//숫자 정보를 나타내는 상수 변수
typedef enum {

	MA_INPUT = 1,
	//MA_INPUT = 1을 넣어주면 자동으로 1씩 증가해 상수값으로 된다.
	MA_SHOW,
	MA_UPDATE,
	MA_DELETE,
	MA_SEARCH,
	MA_INIT,
	MA_EXIT,
	MA_PRODATA
}MAIN_MENU;

extern int main_menu();
extern void stdPrint(LECTURE);

#endif 

