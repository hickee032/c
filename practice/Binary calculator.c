#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	/* ���� ����
	   ���� �Է� �ް� ���� �Է� �ް� ������� */

	int n = 0;
	int bina = 0; // ���� �Է�

	printf("�ٲ� 10������ �Է��ϼ��� : ");
	scanf("%d", &n);

	printf("�� ������ �ٲܰ����� �Է��ϼ��� : ");
	scanf("%d", &bina);



	int arr[20];

	int count = 0;

	while (1)
	{
		if (count > 0)
		{
			n = n / bina;
			//printf("n�� ���� ��ȭ Ȯ�� : %d\n", n);
		}

		arr[count] = n % bina;

		if (n == 0) {
			break;
		}

		count++;
	}
	//printf("count �� Ȯ��  : %d\n", count);

	for (int i = 0; i < count; i++)
	{
		//printf("arr[%d] : %d\n", i, arr[i]);

		if (arr[i] >= 10) // 10 11 12 13 14 15 
		{
			arr[i] = 65 + (arr[i] % 10);
		}
	}

	printf("\n");

	for (int j = count - 1; j >= 0; j--)
	{
		if (arr[j] > 64)
		{
			printf("%c", (char)(arr[j]));
		}
		else
		{
			printf("%d", arr[j]);
		}


		//printf("j�� �� Ȯ��  : %d\n", j);
	}




}