#include <stdio.h>

int main() {
	//3.�����͸� �迭�� ��������  ���
		//�迭�� �ʱⰪ 10 20 30 40 ... 100
		//���ο� �迭�� �����Ͽ� 100 90 80 70 ���� �����Ͽ� ���

	int arr1[] = { 10,20,30,40,50,60,70,80,90,100 };

	int lenght = sizeof(arr1) / sizeof(int);

	printf("�迭�� ���� : %d", lenght); //10

	int arr2[10];

	for (int i = 0; i < 10; i++) {

		arr2[i] = arr1[lenght - 1];
		lenght--;

		printf("%d, ", arr2[i]);
	}


}