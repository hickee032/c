#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int a,b,total = 0;
	printf("�ΰ��� ������ �Է��ϼ��� \n");
	scanf("%d %d", &a, &b);

	if (a>b)
	{
		printf("�ι�° ���� ù���� �� ���� Ŀ�� �մϴ�.");
	}
	else
	{
		for (int i = a; i < b+1; i++)
		{
			total += i;
		}
	}

	printf("%d", total);
	


}