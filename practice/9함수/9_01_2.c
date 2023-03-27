#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double CelToFah(double a);
double FahToCel(double a);

int main() {

	double cel = 0.0;
	double changeCel = 0.0;

	double fah = 0.0;
	double changeFah = 0.0;

	printf("¼·¾¾¿Âµµ¸¦ ÀÔ·Â\n");
	scanf("%lf", &cel);

	changeCel = CelToFah(cel);

	printf("È­¾¾ ¿Âµµ : %.2lf\n", changeCel);

	printf("È­¾¾ ¿Âµµ¸¦ ÀÔ·Â\n");
	scanf("%lf", &fah);

	changeFah = FahToCel(fah);

	printf("¼·¾¾ ¿Âµµ : %.2lf", changeFah);

}

double CelToFah(double a) {
	double cel = 0.0;

	cel = a * 1.8 + 32;

	return cel;
}

double FahToCel(double a) {

	double fah = 0.0;
	fah = (a - 32) * 5 / 9;
	return fah;
}


