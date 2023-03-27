#include <stdio.h>

int main() {

	int arr[5] = { 1, 2, 3, 4, 5 };

	int* ptr = &arr[(sizeof(arr) / sizeof(int))-1];
	int sum = 0;

	//printf("%d\n", (sizeof(arr) / sizeof(int)) - 1);
	//printf("%d\n", (sizeof(arr) / sizeof(int)));
	printf("%d\n", *ptr);

	for (int i =0 ; i< (sizeof(arr) / sizeof(int)); i++) {

		sum += *(ptr-i);
		printf("%d\n", *(ptr-i));
	}

	printf("sum : %d", sum);

}