#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int input;
	int temp = 0;

	scanf("%d", &input);

	int* arr = malloc(sizeof(int) * input);

	for (int i = 0; i < input; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < input; i++) {
		printf("%d ", arr[i]);
	}

	for (int i = 0; i < input; i++) {
		for (int j = i; j < input; j++) {
			if (arr[i] > arr[i+1]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < input; i++) {
		printf("%d ", arr[i]);
	}


}

