#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*���� 5�� �Է¹޴´�. ������ �ݵ�� 1�̻� 1�̸��� ����. �߸� �Է� �� ��� �� �Է� �䱸 while�� �� ���
	-> �ѹ��� �Է��̴� �Ѳ����� �Է��� �ƴ϶� */

int main() {

	int count = 5;
	int n = 0;
	int total = 0;

	while (count > 0)
	{
		scanf("%d", &n);
		//printf("n�� %d",n);

		while (n>0)
		{
			total += n;
			//printf("total�� %d\n", total);
			count--;
			break;
		}

		while (n<=0)
		{
			printf("�ٽ� �Է�\n");
			break;
		}
	
	}
	printf("���� : %d", total);
}

