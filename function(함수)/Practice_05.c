#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ���� �Է� �޾Ƽ� ������ ���*/

int main() {

	int a = 0;
	printf("���ڸ� �Է��ϼ��� : ");

	scanf("%d", &a);
	gugu(a);

	//Ȧ�� ��� ������
	int oddgugu();

}

int gugu(int a) {

	for (int i = 1; i < 9; i++)
	{
		printf("%d * %d = %d\n", a, i, a * i);
	}
}

int oddgugu() {

	for (int i = 2; i < 10; i++)
	{
		if (i%2!=0)
		{
			for (int j = 1; i < 10; i++) {
				printf("%d * %d = %d\n", i, j, i * j);
			}
		}
		else {
			printf("\n");
		}

	}

}

