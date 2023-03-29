#include "def.h"
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include "haksa.h"
#include "file_util.h"

void lect_write(LECTURE lect)
{
	FILE* fp = NULL;
	fp = fopen("d:/st_bin.bin", "ab");
	if (fp == NULL) {
		printf("파일을 생성할수가 없습니다.\n");
		return;
	}
	fwrite(&lect, sizeof(LECTURE), 1, fp);
	fclose(fp);
}

void lect_read()
{
	FILE* fpr = fopen("d:/st_bin.bin", "rb");
	if (fpr == NULL) {
		printf("파일을 읽을수가 없습니다.\n");
		return;
	}

	LECTURE st_t = { 0, };
	int count = 1;
	while (fread(&st_t, sizeof(LECTURE), 1, fpr) == 1) {
		printf("학생번호:%d\n", count++);
		std_lect_show(st_t);
		printf("----------------------\n");
	}
	fclose(fpr);
}

// 전체 데이터 삭제
void lect_init()
{
	FILE* fp = NULL;
	fp = fopen("d:/st_bin.bin", "wb");
	if (fp == NULL) {
		printf("파일을 생성할수가 없습니다.\n");
		return;
	}
	fclose(fp);
}

void lect_search(char name[])
{
	FILE* fpr = fopen("d:/st_bin.bin", "rb");
	if (fpr == NULL) {
		printf("파일을 읽을수가 없습니다.\n");
		return;
	}

	LECTURE st_t = { 0, };
	int count = 1;
	while (fread(&st_t, sizeof(LECTURE), 1, fpr) == 1) {
		if (strcmp(name, st_t.std.name) == 0) {
			printf("학생번호:%d\n", count++);
			std_lect_show(st_t);
			printf("----------------------\n");
		}
	}
	fclose(fpr);
}

void lect_search2(char *name)
{
	FILE* fpr = fopen("d:/st_bin.bin", "rb");
	if (fpr == NULL) {
		printf("파일을 읽을수가 없습니다.\n");
		return;
	}

	LECTURE st_t = { 0, };
	int count = 1;
	while (fread(&st_t, sizeof(LECTURE), 1, fpr) == 1) {
		if (strcmp(name, st_t.std.name) == 0) {
			printf("학생번호:%d\n", count++);
			std_lect_show(st_t);
			printf("----------------------\n");
		}
	}
	fclose(fpr);
}

void lect_delete(char *name)
{
	FILE* fp = fopen("d:/st_bin.bin", "rb");
	if (fp == NULL) {
		printf("파일을 읽을수가 없습니다.\n");
		return;
	}

	LECTURE src = { 0, };
	static LECTURE dest[256] = { 0, };
	int idx = 0;
	int found = 0;
	while (fread(&src, sizeof(LECTURE), 1, fp) == 1) {
		if (strcmp(name, src.std.name) != 0) {
			dest[idx++] = src;
			//memcpy(&dest[idx++], &src, sizeof(LECTURE));
		}
		else {
			found = 1;
		}
	}
	fclose(fp);
	if (found == 0) {
		printf("삭제할 정보를 찾을 수 없습니다.\n");
		return;
	}
	
	fp = fopen("d:/st_bin.bin", "wb");
	if (fp == NULL) {
		printf("파일을 생성할수가 없습니다.\n");
		return;
	}
	for (int i = 0; i < 256; i++) {
		if (strcmp(dest[i].std.name, "") != 0) {
			fwrite(&dest[i], sizeof(LECTURE), 1, fp);
		}
		else break;
	}
	fclose(fp);
	memset(dest, 0, sizeof(LECTURE) * 256);
	printf("%s 정보가 삭제중입니다...\n", name);
	Sleep(2000);
}

void lect_update(char* src_name, char* dst_name) {

	FILE* fp = fopen("d:/st_bin.bin", "rb");
	if (fp == NULL) {
		printf("파일을 읽을수가 없습니다.\n");
		return;
	}

	LECTURE src = { 0, };
	static LECTURE dest[256] = { 0, };
	int idx = 0;
	int found = 0;
	while (fread(&src, sizeof(LECTURE), 1, fp) == 1) {
		memcpy(&dest[idx], &src, sizeof(LECTURE));
		if (strcmp(src_name, src.std.name) == 0) {

			strcpy(dest[idx].std.name, dst_name);
			found = 1;
		}
		idx++;
	}
	fclose(fp);
	if (found == 0) {
		printf("삭제할 정보를 찾을 수 없습니다.\n");
		return;
	}

	fp = fopen("d:/st_bin.bin", "wb");
	if (fp == NULL) {
		printf("파일을 생성할수가 없습니다.\n");
		return;
	}
	for (int i = 0; i < 256; i++) {
		if (strcmp(dest[i].std.name, "") != 0) {
			fwrite(&dest[i], sizeof(LECTURE), 1, fp);
		}
		else break;
	}
	fclose(fp);
	memset(dest, 0, sizeof(LECTURE) * 256);
	Sleep(2000);
}

void lect_rand_write(LECTURE lect[])
{
	FILE* fp = NULL;
	fp = fopen("d:/st_bin.bin", "ab");
	if (fp == NULL) {
		printf("파일을 생성할수가 없습니다.\n");
		return;
	}
	for (int i = 0; i < 10; i++) {
		fwrite(&lect[i], sizeof(LECTURE), 1, fp);
	}
	fclose(fp);
}