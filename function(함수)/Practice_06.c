#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ������ 2~9�ܱ��� ��� �� Ȧ���ܸ� ����ϴ� ���α׷�
   ��������� 3x1=3 5x1=5 ...
*/


int main() {
	
	oddgugu();
}

int oddgugu() {

	for (int i = 1; i < 10; i++)
	{
	
		for (int j = 2; j < 10; j++) {
			if (j % 2 != 0)
			{
				printf("%d X %d = %d\t", j, i, i * j);
			}
			else
			{
				continue;
			}

			
			
		}

		printf("\n");
	}

}



