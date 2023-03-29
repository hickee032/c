#include "def.h"
#include <stdio.h>
#include "menu.h"
#include "haksa.h"
//안쓰는 헤더 파일을 넣더라도 에러가 발생하지 않는 다.

//메인 메뉴
int main_menu() {

	printf("--------------------------\n");
	printf("--학사 관리 프로그램 1.0--\n");
	printf("--------------------------\n");
	printf("- 1. 학생 정보 입력\n");
	printf("- 2. 학생 정보 보기\n");
	printf("- 3. 학생 정보 수정\n");
	printf("- 4. 학생 정보 삭제\n");
	printf("- 5. 학생 정보 검색\n");
	printf("- 6. 정보 초기화\n");
	printf("- 7. 프로 그램 종료\n");
	printf("--------------------------\n");
	printf(">> 메뉴 선택 :");
	int menu = 0;
	scanf("%d", &menu);
	return menu;
}

void stdPrint(LECTURE lec) {

	printf("=====================\n");
	printf("= 수 강 신 청 현 황 =\n");
	printf("=====================\n");
	printf("===== %d : %s 님=====\n", lec.std.std_id, lec.std.name);
	printf("= 1번 =\n");
	printf(">> 신청 전공 : %s 학점 %d\n", lec.major[0].name, lec.major[0].hakjum);
	printf("= 2번 =\n");
	printf(">> 신청 전공 : %s 학점 %d\n", lec.major[1].name, lec.major[1].hakjum);
	printf("= 3번 =\n");
	printf(">> 신청 전공 : %s 학점 %d\n", lec.major[2].name, lec.major[2].hakjum);
	printf("= 강의실 : %s =\n", lec.class_room);
	printf("======================================\n");
	printf("= 담당 교수님 : %s =\n", lec.prof.name);
	printf("= 전화번호 : %s =\n", lec.prof.tel);
	printf("= E-MAIL : %s =\n", lec.prof.email);
	printf("======================================\n");


}