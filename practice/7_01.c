#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	/*�Է� ������ ��ŭ hello world ���

	int n = 0;

	scanf("%d", &n);

	while (n>0)
	{
		printf("Hello World\n"); 
		
		n--;
	}
	*/

	/*���� �Է� �� ��ŭ 3�� ��� ��� 5 �Է� 3 6 9 12 15

	int n = 0;
	int m = 3;
	int b = 1;
	scanf("%d", &n);

	while (n > 0)
	{
		printf("%d ", m*b);
		b++;
		n--;
	}
	*/

	/*����ؼ� ����ڷ� ���� ������ �Է� ���� �� ���� ��� �ؼ� ���ذ� 0�� �Է½� ��� �� ���
	
	int input = 0;
	int total = 0;

	while (1)
	{
		scanf("%d", &input);
		if (input == 0)
		{
			printf("������ %d\n", total);
		}
		else {
			total += input;

			//printf("���� %d\n", total);
		}


	}
	*/

	/*������ �ܼ� �Է� �� �� �� ���

	int n = 0;
	int count = 9;
	scanf("%d", &n);

	while (count > 0)
	{
		printf("%d X %d = %d\n", n, count, n * count);
		count--;
	}
	*/

	//����ڷ� ���� ���� ������ ������ �Է� �ް� �� �� ��ŭ ���� �Է��Ŀ� ��� �� ���

	int n = 0;
	

	int num = 0;
	int total = 0;

	scanf("%d", &n);  //������ ����

	int count = n;
	while (count >0)
	{
		scanf("%d", &num);

		total += num;

		count--;
	}
	printf("%f", (double)(total / n));






}