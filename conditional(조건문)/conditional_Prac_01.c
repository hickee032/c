#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*���� ���� ���� ������ �Է� �ް� �հ� ����� ���*/
	/*100~90 A .. ����*/

	int kor = 0;
	int eng = 0;
	int math = 0;

	int total = 0;
	int avr = 0.0;
	char grade = ' ';

	printf("���� ���� �Է� => ");
	scanf("%d", &kor);
	printf("���� ���� �Է� => ");
	scanf("%d", &eng);
	printf("���� ���� �Է� => ");
	scanf("%d", &math);

	total = kor + eng + math;
	avr = total / 3;

	switch (avr/10)
	{
	case 10:
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	case 5:
		grade = 'E';
		break;

	default:
		grade = 'F';
		break;
	}

	printf("���� : %d\n", total);
	printf("��� : %d\n", avr);
	printf("���� : %c\n", grade);






}