#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void bsChange(char* a, int length);

int main() {

	char arr[100];
	scanf("%s", arr);
	char* pArr = arr;
	int length = strlen(pArr);
	bsChange(pArr, length);
}

void bsChange(char* arr,int length) {

	for (int i = 0; i < length; i++) {
		if (64<*(arr + i)&& *(arr + i)<91) {
			*(arr + i) += 32;
		}
		else {
			*(arr + i) -= 32;
		}
	}
	printf("%s", arr);
}


