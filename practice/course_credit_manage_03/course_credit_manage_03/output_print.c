#include "def.h"
#include <stdio.h>
#include "output_print.h"
#include "haksa.h"

//�� �� �� û �� Ȳ
void printCs(LECTURE lect){
	printf("=====================\n");
	printf("= �� �� �� û �� Ȳ =\n");
	printf("=====================\n");
	printf("===== %d : %s ��=====\n", lect.std.std_id, lect.std.name);
	printf("= 1�� =\n");
	printf(">> ��û ���� : %s ���� %d\n", lect.major[0].name, lect.major[0].hakjum);
	printf("= 2�� =\n");
	printf(">> ��û ���� : %s ���� %d\n", lect.major[1].name, lect.major[1].hakjum);
	printf("= 3�� =\n");
	printf(">> ��û ���� : %s ���� %d\n", lect.major[2].name, lect.major[2].hakjum);
	printf("= ���ǽ� : %s =\n", lect.class_room);
	printf("======================================\n");
	printf("= ��� ������ : %s =\n", lect.prof.name);
	printf("= ��ȭ��ȣ : %s =\n", lect.prof.tel);
	printf("= E-MAIL : %s =\n", lect.prof.email);
	printf("======================================\n");

}