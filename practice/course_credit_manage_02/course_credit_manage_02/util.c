#include "def.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "util.h"
#include <Windows.h>
#include "cui.h"

void get_time(char *tinfo) {

	time_t  timer;
	struct  tm* t;
	timer = time(NULL);
	//timer : 1970�� 1��1�� 0�� 0�ʺ��� ~ ��������� ��
	//���н� Ÿ�� 
	t = localtime(& timer);

	char buf[40] = { 0, };
	sprintf(buf, "%d�� %d�� %d�� - %d�� %d�� %d��",
		t->tm_year +1900,
		t->tm_mon + 1,
		t->tm_mday,
		t->tm_hour,
		t->tm_min,
		t->tm_sec);
		strcpy(tinfo, buf);
}

void uititle(char a[]) {

	int x = 5;
	int y = 0;

	gotoxy(x, y + 0); printf("������������������������");
	gotoxy(x, y + 1); printf("��                                          ��");
	gotoxy(x, y + 2); printf("�� ��_��                                    ��");
	gotoxy(x, y + 3); printf("�� ' ��')                                   ��");
	gotoxy(x, y + 4); printf("��  ����                                    ��");
	gotoxy(x, y + 5); printf("��                                          ��");
	gotoxy(x, y + 6); printf("��                                          ��");
	gotoxy(x, y + 7); printf("������������������������");

	gotoxy(x + 14, y + 5); printf(a);

	gotoxy(x, y + 9);


}