#include "def.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "util.h"
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

int searchString(char a[],char b) {
	int flag = 0;
	char* ptr = strchr(a, b);

	if ( ptr == NULL) {
		fontcolor(12);
		printf("!!!!!!!!!!!!!!!!!!!!!!\n");
		printf("�̸��� ���°� �ƴմϴ�.\n");
		fontcolor(14);
		flag = 1;
	}

	return flag;
}

int seaechLength(char a[]) {
	int flag = 0;
	int length = strlen(a);
	if (length <10) {
		fontcolor(12);
		printf("!!!!!!!!!!!!!!!!!!!!!!\n");
		printf("��ȭ��ȣ ���̰� ª���ϴ�.\n");
		fontcolor(14); 
		flag = 1;
	}
	return flag;
}