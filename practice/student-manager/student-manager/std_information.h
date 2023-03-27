//#pragma once
#ifndef  __STD_H__
#define __STD_H__
typedef struct _std_infor {

	char stNum[10];
	char stName[10];
	char stCall[20];

	int grade;  //학년
	int score1; //1학년 점수
	int score2; //2학년 점수
	int score3; //3학년 점수

}STD;

STD st;

extern void showMenu();
void input_std();

#endif

