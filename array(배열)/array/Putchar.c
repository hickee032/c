#include <stdio.h>

int main() {

	/*�ѱ��� �迭�� �����ϰ� ��� �Ҷ�  �ѱ��ھ� ����� �ϸ� ����� �ȵ�*/

	char arr[] = "�ȳ��ϼ���" ; //5
	printf("ù ���ڴ� : %c\n", arr[0]);

	//�ѱ��� 2byte �̱⶧���� 1byte 2���� ����Ѵ�.
	//�׷��� ������ 
	//2(�ѱ� ��) + 1 
		//+1 �� �ϴ� ������ ������ ���� �˸��� �����ͷ� null �ǹ�

	//�迭�� ���̸� �˾Ƴ�
	int lenght = sizeof(arr) / sizeof(char);

	printf(">�迭 ����<  %d\n", lenght); // 11

	printf("ù���ڴ� : %c%c\n", arr[0],arr[1]);

	//for������ ���
	for (int i = 0; i < lenght; i++)
	{
		ptintf(arr[i]);
	}
	//�������� ����� �ȵȴ�

	//putchar();
	for (int j = 0; j < lenght; j++)
	{
		putchar(arr[j]);
	}
	//���� ����� �ȴ�

	printf("------------------------------------\n");

	//������
	for (int i = 0; i < lenght-1; i++)
	{
		putchar(arr[i]);
	}



}