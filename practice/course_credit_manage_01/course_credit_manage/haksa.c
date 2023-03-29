#include "def.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include "haksa.h"
#include "util.h"

//정보 입력
LECTURE lect = { 0, };

void std_lecture_input() {
	
	
	system("cls");
	printf("***********************************\n");
	printf("* 수강 신청 정보를 입력합니다. *\n");
	printf("***********************************\n");
	printf("* 학생 이름을 입력하세요. *\n");
	scanf("%s", lect.std.name);
	printf("* 학번을 입력하세요. *\n");
	scanf("%d", &lect.std.std_id);
	printf("* 전공을 입력하세요. *\n");
	scanf("%s", lect.std.major);
	printf("* 나이를 입력하세요. *\n");
	scanf("%d", &lect.std.age);
	printf("* 전화번호를 입력하세요. *\n");
	scanf("%s", lect.std.tel);
	printf("* 주소를 입력하세요. *\n");
	//scanf("%s", lect.std.addr);
	getchar();
	gets_s(lect.std.addr,sizeof(char)*40);
	printf("* Email를 입력하세요. *\n");
	scanf("%s", lect.std.email);

	printf("----------- 담당 교수 정보 ----------\n");
	printf("교수명을 입력하세요 : ");
	scanf("%s", lect.prof.name);
	printf("담당 전공을 입력하세요 : ");
	scanf("%s", lect.prof.major);
	printf("전화번호를 입력하세요 : ");
	scanf("%s", lect.prof.tel);
	printf("Email을 입력하세요 : ");
	scanf("%s", lect.prof.email);

	printf("----------- 신청 전공 정보 ----------\n");
	printf("1번째 전공을 입력하세요 : ");
	scanf("%s", lect.major[0].name);
	lect.major[0].hakjum = 3;
	printf("2번째 전공을 입력하세요 : ");
	scanf("%s", lect.major[1].name);
	lect.major[1].hakjum = 4;
	printf("3번째 전공을 입력하세요 : ");
	scanf("%s", lect.major[2].name);
	lect.major[2].hakjum = 2;

	//수강 신청 날짜
	char curtime[40] = { 0, };
	get_time(curtime);
	strcpy(lect.date, curtime);

	//강의실 정보
	printf("강의실을 입력하세요 : ");
	scanf("%s", lect.class_room);

	std_enrolment();
	

}
void std_enrolment() {

	printf("\n수강신청서를 작성중입니다...\n");
	Sleep(2000); //대기 : 밀리세컨드 1000ms = 1sec
	printf("\n");
	printf("+++++++++++++++++\n");
	printf("+%s 수강신청서 +\n", lect.std.name);
	printf("+++++++++++++++++\n");
	printf("학번 :%d\n", lect.std.std_id);
	printf("전공학과 :%s\n", lect.std.major);
	printf("전화번호 :%s\n", lect.std.tel);
	printf("주소 :%s\n", lect.std.addr);
	printf("Email :%s\n", lect.std.email);
	printf("\n");

	printf("-- 담당 교수 정보 --\n");
	printf("이름 :%s\n", lect.prof.name);
	printf("전공 :%s\n", lect.prof.major);
	printf("전화번호 :%s\n", lect.prof.tel);
	printf("Email :%s\n", lect.prof.email);
	printf("\n");

	printf("-- 신청 전공 목록 --\n");
	for (int i = 0; i < 3; i++) {
		printf("신청 전공%d : %s, 학점 : %d\n", i + 1, lect.major[i].name, lect.major[i].hakjum);
	}

	printf("-- 기타 수강 정보 --\n");
	printf("신청날짜 :%s\n", lect.date);
	printf("Email :%s\n", lect.class_room);
}
