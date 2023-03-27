//#pragma once
//student.h , student.c 에서는 학생 정보만 사용한다.
#ifndef  __STUDENT_H__
#define  __STUDENT_H__

typedef struct _STUDENT {
	//_STUDENT ST 같으면 안된다.

	char name[10]; //이름
	int kor;
	int eng;
	int math;
	int hap;
	double avg;
	char grade;

} ST;

ST st; //구조체 변수 선언 (전역 변수)

extern void init_student(); //함수 프로토 타입
void show_student(ST st); //extern 생략 가능

#endif

