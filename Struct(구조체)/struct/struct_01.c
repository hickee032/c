#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�������� ����
//main() �ۿ� ���(�ȿ� �־ ��� ����)
//�л� ���� ����ü ���� -> ���� ���Ӱ� ������ Ÿ��
typedef struct _STUDENT {
	char name[10]; //�̸�
	int kor;
	int eng;
	int math;
	int hap;
	double avg;
	char grade;

} STUDENT;


int main() {

	STUDENT st; //����ü ������ ����(����)
	//STUDENT : ���� ���� Ÿ��, st ���� (�� �ȿ� 	char name[10];,int kor;,int eng;,int math;,int hap;,int avg;,char grade; �� �ִ�.)

	//STUDENT* pst = &st;
	//pst->kor = 50;������ �ϋ��� ȭ��ǥ�� ����Ѵ�.
/*
	printf("�̸� : ");
	scanf("%s", st.name); //& �ʿ� ����. �迭�̴� (���ڿ�)
	printf("���� : ");
	scanf("%d", &st.kor); //& �ʿ�
	printf("���� : ");
	scanf("%d", &st.eng);
	printf("���� : ");
	scanf("%d", &st.math);

	st.hap = st.kor + st.eng + st.math;
	st.avg = st.hap / 3.0;

	printf("�л��̸� : %s\n", st.name);
	printf("�������� : %d\n", st.kor);
	printf("�������� : %d\n", st.eng);
	printf("�������� : %d\n", st.math);
	printf("���� : %d\n", st.hap);
	printf("��� : %lf\n", st.avg);
*/
	STUDENT stArr[2] = { 0, }; //����ü �迭 ���� 
	for (int i = 0; i < 2; i++) {
		printf("�̸� : ");
		scanf("%s", stArr[i].name);
		printf("���� : ");
		scanf(" %d", &stArr[i].kor);
		printf("���� : ");
		scanf(" %d", &stArr[i].eng);
		printf("���� : ");
		scanf(" %d", &stArr[i].math);
		stArr[i].hap = stArr[i].kor + stArr[i].eng + stArr[i].math;
		(stArr + i)->avg = (stArr + i)->hap / 3.0;

	}

	for (int i = 0; i < 2; i++) {

		printf("�л��̸� : %s\n", (stArr + i)->name);
		printf("�������� : %d\n", (stArr + i)->kor);
		printf("�������� : %d\n", (stArr + i)->eng);
		printf("�������� : %d\n", (stArr + i)->math);
		printf("���� : %d\n", (stArr + i)->hap);
		printf("��� : %.2lf\n", (stArr + i)->avg);
		printf("=================================\n");
	}


}