#include "def.h"
#include <stdio.h> 
#include "student.h"

//파일 쓰기
void file_w(char a[], char b[], ST st) {

	FILE* fp = NULL;
	fp = fopen(a, b);
	if (fp == NULL) {
		printf("파일을 생성할 수 없습니다.");
		//return -1;
	}
	fwrite(&st, sizeof(st), 1, fp);
	fclose(fp);
}

void file_r(char a[]) {

	FILE* fpr = fopen(a, "rb");
	if (fpr == NULL) {
		printf("파일을 읽어올 수 없습니다.");
		//return -1;
	}

	ST st = { 0, };

	while (fread(&st, sizeof(st), 1, fpr) == 1) {

		printf("=====================\n");
		printf("읽어온 파일 정보\n");
		printf("=====================\n");
		printf("학생정보 :%s\n", st.name);
		printf("국어점수 :%d\n", st.kor);
		printf("영어점수 :%d\n", st.eng);
		printf("수학점수 :%d\n", st.math);
		printf("총합 :%d\n", st.hap);
		printf("평균 :%.2f\n", st.avg);

	}
	fclose(fpr);
}
