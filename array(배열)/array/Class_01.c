#include <stdio.h>
int main() {

	int num = 10;
	int szi1 = sizeof(num);
	int szi2 = sizeof(int);

	printf("%d\n", num);
	printf("������ ũ�� : %d byte\n", szi1);
	printf("�ڷ����� ũ�� : %d\n", szi2);

	double num1 = 0.0;
	int szd1 = sizeof(num1);
	int szd2 = sizeof(double);


	printf("%lf\n", num1);
	printf("������ ũ�� : %d byte\n", szd1);
	printf("�ڷ����� ũ�� : %d\n", szd2);

	short snum = 15000;
	printf("%d\n", snum);
	printf("������ ũ�� : %hd byte\n", sizeof(snum));
	printf("�ڷ����� ũ�� : %hd\n", sizeof(short));

	printf("%d",sizeof(7));
	printf("%d", sizeof(7.4));
	printf("%d", sizeof('A'));

	float n1 = 5.789;
	float n2 = 3.24 + 5.12;
	return 0;

}