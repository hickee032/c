#ifndef  __HAKSA_H__
#define __HAKSA_H__

//���� ��û�л� - �Ѹ� ���� ����
//�������� ���ÿ� ǥ���ϱ� ���Ѵٸ� �迭
typedef struct _STUDENT {

	int std_id;
	char name[20];
	int age;
	char major[20];
	char tel[20];
	char addr[40];
	char email[20];

}STUDENT;

//���� ����
typedef struct _PROFESSOR {

	char name[20];
	char major[20];
	char tel[20];
	char email[20];

}PROFESSOR;

typedef struct _MAJOR_SUBJECT {
	char name[20];
	int hakjum;
}MAJOR_SUBJECT;

typedef struct _LECTURE {
	//����ü �ȿ� ����ü�� �� ����
	STUDENT std;
	PROFESSOR prof;
	MAJOR_SUBJECT major[3];
	char date[60];
	char class_room[20];

}LECTURE;

extern void std_lecture_input();
extern void std_enrolment();

#endif 

