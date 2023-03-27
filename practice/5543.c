#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int sb = 0, jb = 0, hb = 0, cd = 0, sd = 0;
	int set = 0;
	scanf("%d %d %d %d %d",&sb, &jb, &hb, &cd, &sd);
	
	int minb = 0, mind = 0;

	minb = sb;
	if (sb >= jb) {
		minb = jb;
		if (minb >= hb) {
			minb = hb;
		}
	}
	else {
		if (minb >= hb) {
			minb = hb;
		}
	}

	mind = cd;
	if (mind >= sd){
		mind = sd;
		if (minb >= hb) {
			minb = hb;
		}
	}
	set = (minb + mind) - 50;

	printf("%d", set);


}