#include <stdio.h>

int main() {
	//1~100 까지 3,6,9 개수

	int count = 0;

	for (int i = 1; i <= 100; i++) {

		if ((i % 10 == 3) || (i % 10 == 6) || (i % 10 == 9)) {
			printf("박수\n");

			count++;
		}
		else {
			printf("%d\n",i % 10);
		}
		
	}

	printf("박수의 개수 : %d\n", count);



}