#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	/*���� ��� 
	���������ڷ� ��� */

	int n = 0;
	int bina = 0; // ���� �Է�

	printf("�ٲ� 10������ �Է��ϼ��� : ");
	scanf("%d", &n);

	printf("�� ������ �ٲܰ����� �Է��ϼ��� : ");
	scanf("%d", &bina);

	if (bina ==16)
	{
		printf("%x", bina);
	}
	if (bina==8)
	{
		printf("%o", bina);
	}
	//2������ ���������ڰ� ����. ���� ���� �ؼ� ����ؾ��Ѵ�.
}