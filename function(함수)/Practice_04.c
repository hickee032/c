#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*4. �� �� ���� �Է� �޾Ƽ� ����, ��� ���� ���ϴ� ���α׷�
�Է� �޴� ������ 0~ 100 ������ ���ڸ� �Է� (����üũ �߸� �Է½� ���� ���
������ ������ �� �� �Ű������� ���� ���� ����� ����ϴ� �Լ�
�Ǽ��� �Է½� ���Է�*/

int Tscore(int a, int b, int c);
double avr(Tscore);

int main() {

	int kor, eng, math, total = 0;
	double avrg = 0.0;
	double avrg1 = 0.0;
	
	while (1)
	{
		printf("���� ������ �Է��ϼ���\n");
		scanf(" %d", &kor);
		printf("���� ������ �Է��ϼ���\n");
		scanf(" %d", &eng);
		printf("���� ������ �Է��ϼ���\n");
		scanf(" %d", &math);

		//�Է� �� ���
		//printf("���� : %d ���� : %d ���� : %d\n", kor, eng, math);

		if ((0 <= kor && kor <= 100) && (0 <= eng && eng <= 100) && (0 <= math && math <= 100))
		{
			total = Tscore(kor, eng, math);

			avrg = avr(kor, eng, math);

			avrg1 = avr1(Tscore(kor, eng, math));

			printf("avr1 : %f\n", avrg1);

			printf("������ : %d\n", total);
			printf("����� : %.2f\n", avrg);
			break;
		}
		else
		{
			printf("������ �߸� �Է��߽��ϴ�.\n");
			printf("�ٽ��Է� �ϼ���.\n"); 
			
		}
		printf("\n");
	}



}

int Tscore(int a, int b, int c) {
	int sum = a + b + c;
	printf("sum : %d\n", sum);
	return sum;
}

double avr(int a, int b, int c) {

	double avrg = ((a + b + c) / 3);
	printf("avrg �� : %.2f\n", avrg);
	return avrg;
}

double avr1(Tscore) {

	double avrg = (Tscore / 3);
	printf("avrg �� : %.2f\n", avrg);
	return avrg;
}
