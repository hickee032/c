#include "def.h"
#include <string.h>
#include <stdio.h>
#include "student.h"
//함수
//학생 초기 정보
void init_student() {

	//문자열 복사
	strcpy(st.name, "이길동");
	st.kor = 100;
	st.eng = 100;
	st.math = 100;
	st.hap = st.kor + st.eng + st.math;
	st.avg = st.hap / 3;

	printf("=====================\n");
	printf("학생 기본 정보 목록\n");
	printf("=====================\n");
	printf("학생정보 :%s\n",st.name);
	printf("국어점수 :%d\n", st.kor);
	printf("영어점수 :%d\n", st.eng);
	printf("수학점수 :%d\n", st.math);
	printf("총합 :%d\n", st.hap);
	printf("평균 :%.2f\n", st.avg);
}

void show_student(ST st) {

	printf("=====================\n");
	printf("추가 학생 정보 목록\n");
	printf("=====================\n");
	printf("학생정보 :%s\n", st.name);
	printf("국어점수 :%d\n", st.kor);
	printf("영어점수 :%d\n", st.eng);
	printf("수학점수 :%d\n", st.math);
	printf("총합 :%d\n", st.hap);
	printf("평균 :%.2f\n", st.avg);

}