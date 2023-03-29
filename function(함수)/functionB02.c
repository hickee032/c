#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double avrScore(char arr[]);

int main() {

	char grade[3];
	scanf("%s", &grade);
	printf("%.1lf", avrScore(grade));

}

double avrScore(char arr[]) {
	
	double avrs = 0;

	switch (arr[0]) {
	case 'A':
		if (arr[1]=='+') {
			avrs = 4.3;
		}
		else if (arr[1] == '0') {
			avrs = 4.0;
		}
		else {
			avrs = 3.7;
		}
		break;
	case 'B':
		if (arr[1] == '+') {
			avrs = 3.3;
		}
		else if (arr[1] == '0') {
			avrs = 3.0;
		}
		else {
			avrs = 2.7;
		}
		break;
	case 'C':
		if (arr[1] == '+') {
			avrs = 2.3;
		}
		else if (arr[1] == '0') {
			avrs = 2.0;
		}
		else {
			avrs = 1.7;
		}
		break;
	case 'D':
		if (arr[1] == '+') {
			avrs = 1.3;
		}
		else if (arr[1] == '0') {
			avrs = 1.0;
		}
		else {
			avrs = 0.7;
		}
		break;
	default:
		avrs = 0.0;
		break;
	}

	return avrs;
}