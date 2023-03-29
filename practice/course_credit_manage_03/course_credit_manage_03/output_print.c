#include "def.h"
#include <stdio.h>
#include "output_print.h"
#include "haksa.h"

//수 강 신 청 현 황
void printCs(LECTURE lect){
	printf("=====================\n");
	printf("= 수 강 신 청 현 황 =\n");
	printf("=====================\n");
	printf("===== %d : %s 님=====\n", lect.std.std_id, lect.std.name);
	printf("= 1번 =\n");
	printf(">> 신청 전공 : %s 학점 %d\n", lect.major[0].name, lect.major[0].hakjum);
	printf("= 2번 =\n");
	printf(">> 신청 전공 : %s 학점 %d\n", lect.major[1].name, lect.major[1].hakjum);
	printf("= 3번 =\n");
	printf(">> 신청 전공 : %s 학점 %d\n", lect.major[2].name, lect.major[2].hakjum);
	printf("= 강의실 : %s =\n", lect.class_room);
	printf("======================================\n");
	printf("= 담당 교수님 : %s =\n", lect.prof.name);
	printf("= 전화번호 : %s =\n", lect.prof.tel);
	printf("= E-MAIL : %s =\n", lect.prof.email);
	printf("======================================\n");

}