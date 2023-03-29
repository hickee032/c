#include "def.h"
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include "menu.h"
#include "haksa.h"
#include "file_util.h"
#include "cui.h"
#include "util.h"

char fileAddress[] = "D:/haksa.txt";
char wbAb[] = "ab";

void fileWrite(LECTURE lect) {
	FILE* fw = NULL;
	fw = fopen(fileAddress,wbAb);
	if (fw==NULL) {
		printf("파일을 생성할수 없습니다.\n");
		return;
	}
	fwrite(&lect, sizeof(lect), 1, fw);
	fclose(fw);
}

void fileRead() {

	printf("파일을 읽어오고 있습니다.\n");
	system("cls");
	FILE* fr = NULL;
	fr = fopen(fileAddress, "rt");
	if (fr==NULL) {
		printf("파일을 읽어올 수 없습니다.\n");
		return;
	}
	LECTURE lect = { 0, };

	while (fread(&lect, sizeof(lect), 1, fr)==1) {


		stdPrint(lect);
	
	}

	fclose(fr);

}

void fileDelete() {

	int input = 0;
	int count = 0;

	printf("학번을 입력하세요 : ");
	scanf("%d", &input);

	LECTURE buf[20]= {0,};

	system("cls");

	FILE* fr = NULL;
	fr = fopen(fileAddress, "rt");
	if (fr == NULL) {
		printf("파일을 읽어올 수 없습니다.\n");
		return;
	}
	LECTURE lect = { 0, };

	while (fread(&lect, sizeof(lect), 1, fr) == 1) {

		if (input != lect.std.std_id) {

			buf[count] = lect;

			printf("1 : count : %d\n", count);
			count++;
		}
	}

	fclose(fr);

	FILE* fw = NULL;

	fw = fopen(fileAddress, "wt");

	if (fw == NULL) {
		printf("파일을 생성할수 없습니다.\n");
		return;
	}

	for (int i = 0; i < count; i++) {

		printf("2 : count : %d\n", count);

		if (buf[i].std.std_id != 0) {
			fwrite(&buf[i], sizeof(buf[i]), 1, fw);
		}
		
	}

	for (int i = 0; i < count; i++) {

		printf("std.std_id : %d\n", buf[i].std.std_id);

	}

	
	fclose(fw);
}

void fileChange() {


	int input = 0;
	int count = 0;

	printf("수정할 학번을 입력하세요 : ");
	scanf("%d", &input);

	LECTURE buf[20] = { 0, };

	system("cls");

	FILE* fr = NULL;
	fr = fopen(fileAddress, "rt");
	if (fr == NULL) {
		printf("파일을 읽어올 수 없습니다.\n");
		return;
	}
	LECTURE lect = { 0, };

	fileChacking(lect, fr);

	while (fread(&lect, sizeof(lect), 1, fr) == 1) {

			buf[count] = lect;

			printf("1 : count : %d\n", count);

			count++;

	}

	fclose(fr);

	FILE* fw = NULL;

	fw = fopen(fileAddress, "wt");

	if (fw == NULL) {
		printf("파일을 생성할수 없습니다.\n");
		return;
	}

	for (int i = 0; i < count; i++) {

		printf(">> : count : %d\n", count);

		if (buf[i].std.std_id != input) {

			fwrite(&buf[i], sizeof(buf[i]), 1, fw);
		}
		if (buf[i].std.std_id == input) {

			printf("1번째 전공을 다시 입력하세요 : ");
			scanf("%s", buf[i].major[0].name);
			
			printf("2번째 전공을 다시 입력하세요 : ");
			scanf("%s", buf[i].major[1].name);
	
			printf("3번째 전공을 다시 입력하세요 : ");
			scanf("%s", buf[i].major[2].name);

			fwrite(&buf[i], sizeof(buf[i]), 1, fw);
		}

	}

	for (int i = 0; i < count; i++) {

		printf("std.std_id : %d\n", buf[i].std.std_id);

	}


	fclose(fw);
}
	
void fileSearch() {

	system("cls");

	uititle("검색 선택");

	int input = 0;
	printf("검색할 학번을 입력하세요 :");
	scanf("%d", &input);

	FILE* fr = NULL;
	fr = fopen(fileAddress, "rt");
	if (fr == NULL) {
		printf("파일을 읽어올 수 없습니다.\n");
		return;
	}
	LECTURE lect = { 0, };
	int count = 0;

	fileChacking(lect, fr);
	
	while (fread(&lect, sizeof(lect), 1, fr) == 1) {

		if (input == lect.std.std_id) {
			stdPrint(lect);
			count++;
		}
	}
	if (count == 0) {
		printf("검색 결과가 없습니다.\n");
	}

	fclose(fr);
}

void fileInit() {

	system("cls");
	int input = 0;

	fontcolor(14);
	printf("데이터를 초기화 합니다.\n");
	printf("확실 합니까? [Y/N]\n");

	scanf("%d", &input);
	getchar();

	if (input == 78 || input == 110) {
		printf("메인메뉴로 돌아갑니다.");
		main_menu();
	}

	FILE* fi = NULL;
	fi = fopen(fileAddress, "wt");
	if (fi == NULL) {
		printf("초기화할 파일이 없습니다.\n");
		return;
	}
	fwrite(0, 0, 0, fi);

	fclose(fi);
}

void lect_delete(char* name) {
		//녹색줄 - 스택 오버 플로우 위험

	FILE* fp = NULL;
	fp = fopen(fileAddress, "rt");
	if (fp == NULL) {
		printf("파일을 읽어올 수 없습니다.\n");
		return;
	}

	LECTURE src = { 0, };
	static LECTURE dest[256] = { 0, };
	int idx = 0;

	fileChacking(src, fp);

	while (fread(&src, sizeof(LECTURE), 1, fp) == 1) {
		
		if (strcmp(name,src.std.name)!=0){
			dest[idx++] = src;
			//memcpy(&dest[idx++], &src, sizeof(LECTURE));
		}
	}
	fclose(fp);

	fp = fopen(fileAddress, "w");
	if (fp == NULL) {
		printf("파일을 읽어올 수 없습니다.\n");
		return;
	}
	for (int i = 0; i < 256; i++) {
		if (strcmp(dest[i].std.name, "") != 0) {
			fwrite(&dest[i], sizeof(LECTURE), 1, fp);
		}
		else {
			break;
		}
	}
	fclose(fp);
	
	memset(dest, 0, sizeof(LECTURE)*256);
	printf("%s 정보가 삭제중입니다....\n", name);

	Sleep(1000);

}

void dataProd(int a) {

	char input = 0;

	printf("기존에 존재하는 파일을 제거하고\n");
	printf("새 데이터를 생성합니까 [Y/N] \n");
	scanf("%c", &input);

	if (89 ==input||input==121) {

		printf("데이터를 생성중입니다.\n");
		Sleep(2000);

		LECTURE le[100];
		char rname[3] = " ";
		char rtel[6] = " ";
		char remail[6] = " ";
		char addr[5][5] = { "daegu","inchn","busan","seoul","gangw" };

		for (int i = 0; i < a; i++) {

			for (int i = 0; i < 3; i++) {
				rname[i] = 'a' + (rand() % 26);
			}

			strcpy(le[i].std.name, rname);
			le[i].std.std_id = (rand() % 100) + 1;
			strcpy(le[i].std.major, (char)('a' + (rand() % 26)));
			le[i].std.age = (rand() % 40) + 1;

			for (int i = 0; i < 6; i++) {
				rtel[i] = (rand() % 9) + 1;
			}

			strcpy(le[i].std.tel, rtel);
			strcpy(le[i].std.addr, addr[(rand() % 5)]);

			for (int i = 0; i < 6; i++) {
				remail[i] = 'a' + (rand() % 26);
			}

			strcpy(le[i].std.email, remail);

			for (int i = 0; i < 3; i++) {
				rname[i] = 'a' + (rand() % 26);
			}

			strcpy(le[i].prof.name, rname);
			strcpy(le[i].prof.major, 'a' + (rand() % 26));

			for (int i = 0; i < 6; i++) {
				rtel[i] = (rand() % 9) + 1;
			}

			strcpy(le[i].prof.tel, rtel);

			for (int i = 0; i < 6; i++) {
				remail[i] = 'a' + (rand() % 26);
			}

			strcpy(le[i].prof.email, remail);

			strcpy(le[i].major[0].name, (char)((rand() % 3) + 1));
			strcpy(le[i].major[1].name, (char)((rand() % 3) + 1));
			strcpy(le[i].major[2].name, (char)((rand() % 3) + 1));

			for (int i = 0; i < 1; i++) {

				FILE* fw = NULL;

				fw = fopen(fileAddress, "wt");

				if (fw == NULL) {
					printf("파일을 생성할수 없습니다.\n");
					return;
				}

				fwrite(&le[i], sizeof(le[i]), 1, fw);

			}
		}

	}
	else if(78 == input || input == 110) {

		printf("메인메뉴로 돌아갑니다.\n");
		return main_menu;

	} 
}

//파일에 데이터가 있는 지 확인
void fileChacking(LECTURE le, FILE* fr) {

	if (fread(&le, sizeof(LECTURE), 1, fr) == 0) {

		printf("파일의 내용이 없습니다.\n");
		printf("메인메뉴로 돌아갑니다.\n");
		Sleep(2000);
		system("cls");
		return main_menu();
	}


}