#include "def.h"
#include <stdio.h>
#include "fileutill.h"
#include "student.h"
//�ҽ����Ͽ��� ��� ������ include�� �ƹ� ������ ���� ������ ��� ���Ͽ��� ��������� include �ϸ� ������ ������� �ִ�.

void file_Write(ST st1) {
	
	FILE* fp = NULL; 
	
	fp = fopen("D:/st_bin.bin", "wb"); 
	
	if (fp == NULL) {
		printf("������ ������ �� �����ϴ�.");
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
		printf("������ �о�� �� �����ϴ�.");
		return;
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