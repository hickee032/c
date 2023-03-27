#include "def.h"
#include <stdio.h>
#include "fileutill.h"
#include "student.h"
//소스파일에서 헤더 파일을 include는 아무 문제도 없다 하지만 헤더 파일에서 헤더파일을 include 하면 문제가 생길수도 있다.

void file_Write(ST st1) {
	
	FILE* fp = NULL; 
	
	fp = fopen("D:/st_bin.bin", "wb"); 
	
	if (fp == NULL) {
		printf("파일을 생성할 수 없습니다.");
		return;
	}
	fwrite(&st1, sizeof(st1), 1, fp);
	//fwrite(&st2, sizeof(st2), 1, fp);
	//fwrite(&st3, sizeof(st3), 1, fp);
	
	fclose(fp);

}


void file_Read() {

	FILE* fpr = fopen("D:/st_bin.bin", "rb");
	if (fpr == NULL) {
		printf("파일을 읽어올 수 없습니다.");
		return;
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