//#pragma once
#ifndef  __STD_H__
#define __STD_H__
typedef struct _std_infor {

	char stNum[10];
	char stName[10];
	char stCall[20];

	int grade;  //�г�
	int score1; //1�г� ����
	int score2; //2�г� ����
	int score3; //3�г� ����

}STD;

STD st;

extern void showMenu();
void input_std();

#endif

