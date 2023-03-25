#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//공통적인 정보
//main() 밖에 사용(안에 있어도 상관 없음)
//학생 정보 구조체 정의 -> 내가 새롭게 정의한 타입
typedef struct _STUDENT {
	char name[10]; //이름
	int kor;
	int eng;
	int math;
	int hap;
	double avg;
	char grade;

} STUDENT;


int main() {

	STUDENT st; //구조체 변수의 선언(생성)
	//STUDENT : 내가 만들어낸 타입, st 변수 (이 안에 	char name[10];,int kor;,int eng;,int math;,int hap;,int avg;,char grade; 다 있다.)

	//STUDENT* pst = &st;
	//pst->kor = 50;포인터 일떄는 화살표를 사용한다.
/*
	printf("이름 : ");
	scanf("%s", st.name); //& 필요 없다. 배열이다 (문자열)
	printf("국어 : ");
	scanf("%d", &st.kor); //& 필요
	printf("영어 : ");
	scanf("%d", &st.eng);
	printf("수학 : ");
	scanf("%d", &st.math);

	st.hap = st.kor + st.eng + st.math;
	st.avg = st.hap / 3.0;

	printf("학생이름 : %s\n", st.name);
	printf("국어점수 : %d\n", st.kor);
	printf("영어점수 : %d\n", st.eng);
	printf("수학점수 : %d\n", st.math);
	printf("총점 : %d\n", st.hap);
	printf("평균 : %lf\n", st.avg);
*/
	STUDENT stArr[2] = { 0, }; //구조체 배열 선언 
	for (int i = 0; i < 2; i++) {
		printf("이름 : ");
		scanf("%s", stArr[i].name);
		printf("국어 : ");
		scanf(" %d", &stArr[i].kor);
		printf("영어 : ");
		scanf(" %d", &stArr[i].eng);
		printf("수학 : ");
		scanf(" %d", &stArr[i].math);
		stArr[i].hap = stArr[i].kor + stArr[i].eng + stArr[i].math;
		(stArr + i)->avg = (stArr + i)->hap / 3.0;

	}

	for (int i = 0; i < 2; i++) {

		printf("학생이름 : %s\n", (stArr + i)->name);
		printf("국어점수 : %d\n", (stArr + i)->kor);
		printf("영어점수 : %d\n", (stArr + i)->eng);
		printf("수학점수 : %d\n", (stArr + i)->math);
		printf("총점 : %d\n", (stArr + i)->hap);
		printf("평균 : %.2lf\n", (stArr + i)->avg);
		printf("=================================\n");
	}


}