#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*3. Ȧ���� ¦���� �����ϴ� ���α׷�
	10���� ������ ���� �迭 ����
	�迭�� ������ ����*/

void oddeven(int arr[10]);

int main() {

	int arr[10] = { 20,21,34,4,3,85,63,6,9,75 };

	oddeven(arr);
}

void oddeven(int arr[10]) {

	printf("¦���� ");
	for (int i = 0; i < 10; i++)
	{
		if (arr[i]%2 ==0)
		{
			printf("%d ",arr[i]);
		}
	}
	printf("\n");
	printf("Ȧ���� ");
	for (int j = 0; j < 10; j++)
	{
		if (arr[j] % 2 != 0)
		{
			printf("%d ", arr[j]);

		}
	}
	


}