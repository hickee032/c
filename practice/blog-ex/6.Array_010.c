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
		printf("���� ���� ���α׷�\n");
		printf("----------------------------\n");
		printf("1. �̸� �����Ͽ� ���Ͽ� �����ϱ�\n");
		printf("2. ���Ͽ��� �̸� �о����\n");
		printf("3. ���α׷� ����\n");
		printf("----------------------------\n");

		printf("�޴� ����\n");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			printf("�̸��� �����ϰ� �����մϴ�.\n");

			setlocale(LC_ALL, "");

			wchar_t first[] = L"���������";
			wchar_t mid[] = L"�ٻ������";
			wchar_t last[] = L"�����ٶ�";

			wchar_t name[50][3];

			for (int i = 0; i < 50; i++) {
				//printf("i �� �� : %d\n", i);
				for (int j = 0; j < 3; j++) {



					if (j == 0) {
						//printf("j 0�� �� : %d\n", j);
						name[i][0] = first[rand() % 5];
					}
					if (j == 1) {
						//printf("j 1�� �� : %d\n", j);
						name[i][1] = mid[rand() % 5];
					}
					if (j == 2) {
						//printf("j 2�� �� : %d\n", j);
						name[i][2] = last[rand() % 5];
					}


				}

			}

			printf("�̸��� ������ ������ �Ϸ��߽��ϴ�.\n");

			break;
		case 2:

			printf("�̸��� �ҷ��ɴϴ�.\n");

			for (int i = 0; i < 50; i++) {

				//printf("i �� %d\n", i);
				wprintf(L"%d : %c%c%c\n",i+1, name[i][0], name[i][1], name[i][2]);
			}
			break;

		case 3:
			printf("���α׷��� �����մϴ�.");
			exit(0);
			break;
		}


	}



}
