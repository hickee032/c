#include <stdio.h>

int main() {

	//1.
	// 1���� �迭�� ��, ��� ���
	// 20 34 22 14 36 23 67 -> 7

	int arr[7] = { 20, 34, 22, 14, 36, 23, 67 };
	int sum = 0;
	double avr = 0.0;

	/*sizeof(arr) / sizeof(int)
	  sizeof(arr) 4byte * 7 = 28
	  sizeof(int) 4byte ----> �迭�� ����*/

	int szarr = sizeof(arr) / sizeof(int);

	for (int i = 0; i < szarr; i++)
	{
		sum += arr[i];
	}
	avr = sum / szarr;
	printf("�� %d\n : ", sum);
	printf("��� %lf\n: ", avr);

	//2.
	// 1~ 100������ ���� 1���� �迭�� ����
	//5�� ����� ���
	//�迭�� ��ġ�� 90��° �ϋ� ����� ����
}