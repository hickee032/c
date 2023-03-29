#include "def.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "util.h"

void get_time(char *tinfo) {

	time_t  timer;
	struct  tm* t;
	timer = time(NULL);
	//timer : 1970년 1월1일 0시 0초부터 ~ 현재까지의 초
	//유닉스 타임 
	t = localtime(& timer);

	char buf[40] = { 0, };
	sprintf(buf, "%d년 %d월 %d일 - %d시 %d분 %d초",
		t->tm_year +1900,
		t->tm_mon + 1,
		t->tm_mday,
		t->tm_hour,
		t->tm_min,
		t->tm_sec);
		strcpy(tinfo, buf);
}