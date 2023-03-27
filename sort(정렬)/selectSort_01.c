#include <stdio.h>

//선택정렬

int seSort(int arr[], int n) {
	int temp;
	for (int i = 0; i < n; i++) {

		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}

	}
}


int main() {

	int a[10] = { 8,6,5,2,9,10,12,1,0,3 };

	//정렬 전
	printf("before sort : ");
	for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
		printf("%d ", a[i]);
	}

	printf("\n");
	seSort(a, 10);

	//정렬 후
	printf("after sort : ");
	for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
		printf("%d ", a[i]);
	}




}