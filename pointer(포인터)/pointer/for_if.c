#include <stdio.h>

int main() {
	//1~100 ���� 3,6,9 ����

	int count = 0;

	for (int i = 1; i <= 100; i++) {

		if ((i % 10 == 3) || (i % 10 == 6) || (i % 10 == 9)) {
			printf("�ڼ�\n");

			count++;
		}
		else {
			printf("%d\n",i % 10);
		}
		
	}

	printf("�ڼ��� ���� : %d\n", count);



}