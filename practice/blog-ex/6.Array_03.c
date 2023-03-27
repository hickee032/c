#include <stdio.h>

int main() {
	//3.데이터를 배열에 저장한후  출력
		//배열의 초기값 10 20 30 40 ... 100
		//새로운 배열을 선언하여 100 90 80 70 으로 저장하여 출력

	int arr1[] = { 10,20,30,40,50,60,70,80,90,100 };

	int lenght = sizeof(arr1) / sizeof(int);

	printf("배열의 길이 : %d", lenght); //10

	int arr2[10];

	for (int i = 0; i < 10; i++) {

		arr2[i] = arr1[lenght - 1];
		lenght--;

		printf("%d, ", arr2[i]);
	}


}