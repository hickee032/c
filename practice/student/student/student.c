#include "def.h"
#include <string.h>
#include <stdio.h>
#include "student.h"
//�Լ�
//�л� �ʱ� ����
void init_student() {

	//���ڿ� ����
	strcpy(st.name, "�̱浿");
	st.kor = 100;
	st.eng = 100;
	st.math = 100;
	st.hap = st.kor + st.eng + st.math;
	st.avg = st.hap / 3;

	printf("=====================\n");
	printf("�л� �⺻ ���� ���\n");
	printf("=====================\n");
	printf("�л����� :%s\n",st.name);
	printf("�������� :%d\n", st.kor);
	printf("�������� :%d\n", st.eng);
	printf("�������� :%d\n", st.math);
	printf("���� :%d\n", st.hap);
	printf("��� :%.2f\n", st.avg);
}

void show_student(ST st) {

	printf("=====================\n");
	printf("�߰� �л� ���� ���\n");
	printf("=====================\n");
	printf("�л����� :%s\n", st.name);
	printf("�������� :%d\n", st.kor);
	printf("�������� :%d\n", st.eng);
	printf("�������� :%d\n", st.math);
	printf("���� :%d\n", st.hap);
	printf("��� :%.2f\n", st.avg);

}