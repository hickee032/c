#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int choice = 0;

	while (1) {

		printf("----------------------------\n");
		printf("파일 제어 프로그램\n");
		printf("----------------------------\n");
		printf("1. 이름 생성하여 파일에 저장하기\n");
		printf("2. 파일에서 이름 읽어오기\n");
		printf("3. 프로그램 종료\n");
		printf("----------------------------\n");

		printf("메뉴 선택\n");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			printf("이름을 생성하고 저장합니다.\n");

			setlocale(LC_ALL, "");

			wchar_t first[] = L"김박이최장";
			wchar_t mid[] = L"바사아자차";
			wchar_t last[] = L"가나다라마";

			wchar_t name[50][3];

			for (int i = 0; i < 50; i++) {
				//printf("i 의 값 : %d\n", i);
				for (int j = 0; j < 3; j++) {



					if (j == 0) {
						//printf("j 0의 값 : %d\n", j);
						name[i][0] = first[rand() % 5];
					}
					if (j == 1) {
						//printf("j 1의 값 : %d\n", j);
						name[i][1] = mid[rand() % 5];
					}
					if (j == 2) {
						//printf("j 2의 값 : %d\n", j);
						name[i][2] = last[rand() % 5];
					}


				}

			}

			printf("이름을 생성과 저장을 완료했습니다.\n");

			break;
		case 2:

			printf("이름을 불러옵니다.\n");

			for (int i = 0; i < 50; i++) {

				//printf("i 는 %d\n", i);
				wprintf(L"%d : %c%c%c\n",i+1, name[i][0], name[i][1], name[i][2]);
			}
			break;

		case 3:
			printf("프로그램을 종료합니다.");
			exit(0);
			break;
		}


	}



}
