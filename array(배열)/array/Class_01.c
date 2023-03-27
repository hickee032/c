#include <stdio.h>
int main() {

	int num = 10;
	int szi1 = sizeof(num);
	int szi2 = sizeof(int);

	printf("%d\n", num);
	printf("변수의 크기 : %d byte\n", szi1);
	printf("자료형의 크기 : %d\n", szi2);

	double num1 = 0.0;
	int szd1 = sizeof(num1);
	int szd2 = sizeof(double);


	printf("%lf\n", num1);
	printf("변수의 크기 : %d byte\n", szd1);
	printf("자료형의 크기 : %d\n", szd2);

	short snum = 15000;
	printf("%d\n", snum);
	printf("변수의 크기 : %hd byte\n", sizeof(snum));
	printf("자료형의 크기 : %hd\n", sizeof(short));

	printf("%d",sizeof(7));
	printf("%d", sizeof(7.4));
	printf("%d", sizeof('A'));

	float n1 = 5.789;
	float n2 = 3.24 + 5.12;
	return 0;

}