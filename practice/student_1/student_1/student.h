//#pragma once
//student.h , student.c ������ �л� ������ ����Ѵ�.
#ifndef  __STUDENT_H__
#define  __STUDENT_H__

typedef struct _STUDENT {
	//_STUDENT ST ������ �ȵȴ�.

	char name[10]; //�̸�
	int kor;
	int eng;
	int math;
	int hap;
	double avg;
	char grade;

} ST;

ST st; //����ü ���� ���� (���� ����)

extern void init_student(); //�Լ� ������ Ÿ��
void show_student(ST st); //extern ���� ����

#endif

