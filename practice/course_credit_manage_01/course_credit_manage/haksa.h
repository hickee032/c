#ifndef  __HAKSA_H__
#define __HAKSA_H__

//수강 신청학생 - 한명에 대한 정보
//여러명을 동시에 표현하기 원한다면 배열
typedef struct _STUDENT {

	int std_id;
	char name[20];
	int age;
	char major[20];
	char tel[20];
	char addr[40];
	char email[20];

}STUDENT;

//교수 정보
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
	//구조체 안에 구조체가 들어간 상태
	STUDENT std;
	PROFESSOR prof;
	MAJOR_SUBJECT major[3];
	char date[60];
	char class_room[20];

}LECTURE;

extern void std_lecture_input();
extern void std_enrolment();

#endif 

