#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int opration(int a, int b, char n);
void opration2(int a, int b, char n, int res);
void opration3(int a, int b, char n, int *res);

int main() {

	//�����Ϳ� ����

	char ch = 'A';

	char* p = NULL;
	p = &ch; // �ּҰ��� ����
			 //char* p = &ch;

	printf("ch�� ������ �� : %c\n", ch);
	printf("ch �ּ� �� : %p\n", &ch);
	printf("p�� ������ �� : %p\n", p);
	printf("p�� �����ϴ� �ּ��� ������ �� : %c\n", *p);

	//������ ���� p = �ּ�(�����ϴ� ) 
	//			*p = ������ ��
	// ch�� *p�� ������ ������ ������ �ִ�.
	
	//�����Ϳ� �迭
	int arr[] = { 10,20,30,40 };
	int* pArr = arr;
	//�迭�� �̸��� �ּҸ� ������ �ִ� &(�ּҿ�����)�� ���� �ʴ� ��.

	printf("pArr[0] = %d\n", pArr[0]);
	//�迭ó�� ����� �� �ִ�.
	printf("*pArr = %d\n", *pArr);
	//�ּ� ���� ���Ŀ� *�� �ٰԵǸ� �� *�� ������ �ּ�
	printf("*(pArr + 0) = %d\n", *(pArr + 0));

	printf("*(pArr + 2) = %d\n", *(pArr + 2));

	int num1 = 0, num2 = 0;
	char op = 0;
	printf("���ڸ� �Է��ϼ���\n");
	scanf("%d %d", &num1, &num2);
	printf("�����ڸ� �Է�\n");
	scanf(" %c", &op);

	printf("opration ��� : %d\n", opration(num1, num2, op));

	int result = 0;

	opration2(num1, num2, op, result);

	printf("main result : %d\n", result);


	opration3(num1, num2, op, &result); //�Ű������� *int res �ּҰ��� �ʿ� &�� �ٿ���
	
}

int opration(int a, int b, char n) {

	int result = 0;

	if (n =='+') {
		result = a + b;
	}
	else if(n == '-') {
		result = a - b;
	}
	else if (n == '*') {
		result = a * b;
	}
	else if (n == '/') {
		result = a / b;
	}
	else {
		printf("�����ڰ� �ƴ�");
	}
	return result;
	
}

void opration2(int a, int b, char n, int res) {

	if (n == '+') {
		res = a + b;
		printf("opration2 �ȿ� res �� : %d\n", res);
	}
}


//�Լ����� ���Ǵ� ������ ���� ������ ���ؼ��� return, �׸���  * ������ ������ ����ؾ��Ѵ�.
void opration3(int a, int b, char n, int *res) { // int *res ���� �ּҰ��� ���;��� 

	if (n == '+') {
		*res = a + b;
		printf("opration2 �ȿ� res �� : %d\n", *res);
	}

}

