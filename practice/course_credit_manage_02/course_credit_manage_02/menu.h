#ifndef __MENU_H__
#define __MENU_H__

//���� ������ ��Ÿ���� ��� ����
typedef enum {

	MA_INPUT = 1,
	//MA_INPUT = 1�� �־��ָ� �ڵ����� 1�� ������ ��������� �ȴ�.
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

