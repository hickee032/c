#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <stdlib.h> //rand() �Լ� ���� ���̺귯��
int main() {
	/*1 ~45 ���� ���� ������ ���ڿ��� ��� ����*/
	//����
	int random = 0;

	for (int i = 0; i < 6; i++)
	{
		random = rand() % 45+1;

		printf("%d\t", random);
	}



}