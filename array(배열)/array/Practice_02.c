#include <stdio.h>

int main() {
	//2.
	// 1~ 100������ ���� 1���� �迭�� ����
	//5�� ����� ���
	//�迭�� ��ġ�� 90��° �ϋ� ����� ����

	int arr[100];

	for (int i = 1; i <= 100; i++)
	{
		arr[i - 1] = i;
	}

	for (int j = 0; j <= 89; j++)
	{
		if (arr[j] % 5 == 0) {
			printf("%d\n", arr[j]);
		}
	}
}