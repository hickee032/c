#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*�ΰ��� ���� �Է�
	ù��° ���� ���� �ι�°���� �� ù��° ���� �ι�°������ ��*/
	int fir = 0;
	int sec = 0;
	int sum = 0;

	printf("ù��° ���� �Է� : ");
	scanf("%d", &fir);
	printf("�ι�° ���� �Է� : ");
	scanf("%d", &sec);

	if (sec<=fir)
	{
		printf("�����߻�\n");
		printf("�ι�° ���� �Է� : ");
		scanf("%d", &sec);
	}

	for ( int i = fir;  i <= sec;  i++)
	{
		sum += i;
	}

	printf("%d���� %d������ �� : %d", fir, sec, sum);

}