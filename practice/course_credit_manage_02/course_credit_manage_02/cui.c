//consol UI
#include "def.h"
#include <stdio.h>
#include <Windows.h>
//Windows.h �����쿡���� ���� �ִ� (ǥ�ؿ��� ���)
#include "cui.h"

void gotoxy(int x, int y) {
	COORD pos = { x,y };
	//win32 api
	//������ ������ Ŀ���� �̵�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void title() {

	int x = 5;
	int y = 0;

	gotoxy(x, y + 0); printf("������������������������");
	gotoxy(x, y + 1); printf("��  A____A                                  ��");
	gotoxy(x, y + 2); printf("�� | '��' |                                 ��"); 
	gotoxy(x, y + 3); printf("�� |�á���|                                 ��"); 
	gotoxy(x, y + 4); printf("�� |������|                                 ��");
	gotoxy(x, y + 5); printf("�� |������|                                 ��");
	gotoxy(x, y + 6); printf("��  U����U                                  ��");
	gotoxy(x, y + 7); printf("������������������������");
	
	gotoxy(x + 13, y + 2); printf("�л� ���� 1.0");
	gotoxy(x + 13, y + 4); printf("��¥ : 22�� 10�� 11��");
	gotoxy(x + 13, y + 5); printf("�ۼ��� : ������");

	gotoxy(x, y + 10); printf("�� �޴� ���� ��");
	gotoxy(x, y + 12); printf("�� �л� ���� �Է� : �л�,����,���� ������ �Է��մϴ�.");
	gotoxy(x, y + 14); printf("�� �л� ���� ���� : �л�,����,���� ������ ����մϴ�.");
	gotoxy(x, y + 16); printf("�� �л� ���� ���� : �л�,����,���� ������ �����մϴ�.");
	gotoxy(x, y + 16); printf("�� �л� ���� ���� : �л�,����,���� ������ �����մϴ�.");
	gotoxy(x, y + 16); printf("�� �л� ���� �˻� : �л�,����,���� ������ �˻��մϴ�.");
	gotoxy(x, y + 16); printf("�� �ʱ�ȭ : �����͸� ����, �ʱ�ȭ�մϴ�.");
	gotoxy(x, y + 18); printf("�� �޴� �̵��� �ƹ�Ű�� �������� ��");
	
}
void set_cursot_type(CURSOR_TYPE type) {

	CONSOLE_CURSOR_INFO curinfo;
	//memset CURSOR_TYPE ������ 0���� �ʱ�ȭ �ϰڴ�.
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

//�� �ٲ�
void fontcolor(FONT_COLOR color) {
	//win32 api ǥ���� �ƴϴ�. �ü���� ���� �ٸ���.
	SetConsoleTextAttribute(GetStdHandle( STD_OUTPUT_HANDLE), color);
}