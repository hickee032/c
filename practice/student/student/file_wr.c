#include "def.h"
#include <stdio.h> 
#include "student.h"

//���� ����
void file_w(char a[], char b[], ST st) {

	FILE* fp = NULL;
	fp = fopen(a, b);
	if (fp == NULL) {
		printf("������ ������ �� �����ϴ�.");
		//return -1;
	}
	fwrite(&st, sizeof(st), 1, fp);
	fclose(fp);
}

void file_r(char a[]) {

	FILE* fpr = fopen(a, "rb");
	if (fpr == NULL) {
		printf("������ �о�� �� �����ϴ�.");
		//return -1;
	}

	ST st = { 0, };

	while (fread(&st, sizeof(st), 1, fpr) == 1) {

		printf("=====================\n");
		printf("�о�� ���� ����\n");
		printf("=====================\n");
		printf("�л����� :%s\n", st.name);
		printf("�������� :%d\n", st.kor);
		printf("�������� :%d\n", st.eng);
		printf("�������� :%d\n", st.math);
		printf("���� :%d\n", st.hap);
		printf("��� :%.2f\n", st.avg);

	}
	fclose(fpr);
}
