#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*�ΰ��� ������ �Է� �޾Ƽ� �μ��� ���� ��� ������ ū������ �������� ������ ��� ����� - �� �ɼ� ����*/

int main() {

	int n,m = 0;

	scanf("%d %d", &n, &m);

	if (n>m)
	{
		printf("%d\n", n - m);
	}
	else
	{
		printf("%d\n", m - n);
	}

	/*���� ������*/

	int result = 0;

	result = n > m ? (n - m) : (m - n);

	printf("result : %d\n", result);

}

