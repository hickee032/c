//모듈화의 개념
#include "def.h" //def.h 는 보통 설정 정보를 넣는 다. 
//def.h 가장 위쪽으로
//" " 의미는 st_file_01.c 와 같은 폴더내에 위치 한다라는 뜻이다.
#include <stdio.h> //내부적으로 경로가 연결 (패스가 걸려있다.)
#include "student.h"

int main() {

	ST st1 = { "홍길동",100,90,80,0,0.0,'A' }; //이러한 사용방법도 존재한다.
	init_student();
	show_student(st1);

	//파일 쓰기

	FILE* fp = NULL; //파일 포인터
	// 몇가지 파일제어 중에서 고수준 (사용자와 가까움)
	fp = fopen("D:/st_bin.bin", "wb"); //경로설정이 없다면 내 프로젝트 폴더( 소스파일과 같은 위치)에 파일이 생성된다.
	if (fp==NULL) {
		printf("파일을 생성할 수 없습니다.");
		return -1;
	}
	fwrite(&st1, sizeof(st1), 1, fp);
	//fwrite(&st1, sizeof(st1), 1, fp); fwrite는 만약 10번을 쓰면 10번째 정보만 파일로 쓴다.
	fclose(fp);

	//파일 읽어오기

	FILE* fpr = fopen("D:/st_bin.bin", "rb");
	if (fp == NULL) {
		printf("파일을 읽어올 수 없습니다.");
		return -1;
	}
	ST st_t = { 0, };
	fread(&st_t, sizeof(st_t), 1, fpr);
	printf("=====================\n");
	printf("읽어온 파일 정보\n");
	printf("=====================\n");
	printf("학생정보 :%s\n", st_t.name);
	printf("국어점수 :%d\n", st_t.kor);
	printf("영어점수 :%d\n", st_t.eng);
	printf("수학점수 :%d\n", st_t.math);
	printf("총합 :%d\n", st_t.hap);
	printf("평균 :%.2f\n", st_t.avg);
	
	fclose(fpr);
}
