//���ȭ�� ����
#include "def.h" //def.h �� ���� ���� ������ �ִ� ��. 
//def.h ���� ��������
//" " �ǹ̴� st_file_01.c �� ���� �������� ��ġ �Ѵٶ�� ���̴�.
#include <stdio.h> //���������� ��ΰ� ���� (�н��� �ɷ��ִ�.)
#include "student.h"
#include "file_wr.h"

int main() {

	ST st1 = { "ȫ�浿",100,90,80,0,0.0,'A' }; //�̷��� ������� �����Ѵ�.
	ST st2 = { "��浿",10,30,50,0,0.0,'B' };
	ST st3 = { "�̱浿",90,70,20,0,0.0,'B' };
	init_student();
	show_student(st1);

	//���� ����
	FILE* fp = NULL; //���� ������
	// ��� �������� �߿��� ����� (����ڿ� �����)
	fp = fopen("D:/st_bin.bin", "ab"); //��μ����� ���ٸ� �� ������Ʈ ����( �ҽ����ϰ� ���� ��ġ)�� ������ �����ȴ�.
	//wb�� ���� ���� ������ �� �������� ��ü 
	//ab�� �������Ͽ� ������ ��� �߰��Ͽ� ����
	if (fp == NULL) {
		printf("������ ������ �� �����ϴ�.");
		return -1;
	}
	fwrite(&st1, sizeof(st1), 1, fp);
	fwrite(&st2, sizeof(st2), 1, fp);
	fwrite(&st3, sizeof(st3), 1, fp);
	//fwrite(&st1, sizeof(st1), 1, fp); fwrite�� ���� 10���� ���� 10��° ������ ���Ϸ� ����.
	fclose(fp);

	//���� �о����

	FILE* fpr = fopen("D:/st_bin.bin", "rb");
	if (fp == NULL) {
		printf("������ �о�� �� �����ϴ�.");
		return -1;
	}

	ST st_t = { 0, };

	while (fread(&st_t, sizeof(st_t), 1, fpr) == 1) {

		printf("=====================\n");
		printf("�о�� ���� ����\n");
		printf("=====================\n");
		printf("�л����� :%s\n", st_t.name);
		printf("�������� :%d\n", st_t.kor);
		printf("�������� :%d\n", st_t.eng);
		printf("�������� :%d\n", st_t.math);
		printf("���� :%d\n", st_t.hap);
		printf("��� :%.2f\n", st_t.avg);

	}
	fclose(fpr);
}
