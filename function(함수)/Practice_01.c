#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* �Լ� ���� */

/*1.3���� ���ڸ� �Է� �޾Ƽ� ū������ ���ʷ� ����
	�迭 ��� ����,���� �˰��� ���� */


void compare(int a, int b, int c);

int main() {
	//C p212 p214 p218

	int n, m, s = 0;


	scanf("%d %d %d", &n, &m, &s);

	printf("n�� �� : %d\t", n);
	printf("m�� �� : %d\t", m);
	printf("s�� �� : %d\n", s);

	compare(n, m, s);
}

void compare(int a, int b, int c) {
	
	int comp_a = 0; //���� ū��
	int comp_b = 0; //�߰� ��
	int comp_c = 0; //���� ������ 

	if (a > b)
	{
		if (a>c)
		{
			if (b>c)
			{
				comp_a = a;
				comp_b = b;
				comp_c = c;
			}
			else
			{
				comp_a = a;
				comp_b = c;
				comp_c = b;
			}
			
		}
		else
		{
			comp_a = c;
			comp_b = a;
			comp_c = b;
		}
	}
	else
	{
		if (b>c)
		{
			if (a>c)
			{
				comp_a = b;
				comp_b = a;
				comp_c = c;
			}
			else
			{
				comp_a = b;
				comp_b = c;
				comp_c = a;
			}

		}
		else
		{
			comp_a = c;
			comp_b = b;
			comp_c = a;
		}




	}



	printf("%d %d %d", comp_a,comp_b,comp_c);
}