#ifndef __CUI_H__
#define __CUI_H__

//상수 변화하지 않는 값
typedef enum {

	/*값을 명시 하지 않는 다면
	NOCURSOR  = 0, SOLID_CURSOR = 1,NORMAL_CURSOR = 2
	NOCURSOR = 1이라면
	NOCURSOR = 1, SOLID_CURSOR = 2, NORMAL_CURSOR = 3
	SOLID_CURSOR = 3 만 넣는 다면
	NOCURSOR = 0, SOLID_CURSOR = 3, NORMAL_CURSOR = 4
	*/

	NOCURSOR, 
	SOLID_CURSOR,
	NORMAL_CURSOR

}CURSOR_TYPE;

//색상 정보
typedef enum {
	BLACK,
	BLUE,
	GREEN,
	CYAN,
	RED,
	PURPLE,
	YELLOW,
	WHITE,
	GRAY,
	LIGHT_BLUE,
	LIGHT_GREEN,
	LIGHT_CYAN,
	LIGHT_RED,
	LIGHT_YELLOW,
	LIGHT_GRAY
}FONT_COLOR;



extern void gotoxy(int x, int y);
extern void title();
extern void set_cursot_type(CURSOR_TYPE type);
extern void fontcolor(FONT_COLOR color);

#endif 
