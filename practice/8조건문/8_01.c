#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*1�̻� 100�̸��� ���� 7�� ����� 9�� ����� ��� 7�� ����̸鼭 9�� ����� ������ �ѹ��� ��� */

int main() {

	for (int i = 1; i < 100; i++)
	{
		if (i%7==0)
		{
			printf("%d, ", i);
		}
		else if(i%9==0)
		{
			printf("%d, ", i);
		}
	}
	printf("\n");
}

