#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//10������ 2������ ��ȯ�ϱ� 
	int input = 0;

	int binary[16];

	scanf("%d", &input);


		for (int i = 15; i >= 0; i--) {
			binary[i] = input % 2;
			input = input / 2;
		}
	
		for (int i = 0; i < 16; i++) {
			printf("%d", binary[i]);
		}


	
	


}