#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main() {
	/*
	7. ���� �޴��� ������ ���α׷� �ۼ��ϱ�.
		---------------------------- -
		���� ���� ���α׷� v1.1
		---------------------------- -
		1. �̸� �����Ͽ� ���Ͽ� �����ϱ�
		2. ���Ͽ��� �̸� �о����
		3. ���α׷� ����
		---------------------------- -
		�޴� ���� :

	����1) 1���� �迭 �ʱⰪ
		�̸��� 1��°-- > "��", "��", "��", "��", "��"
		�̸��� 2��°-- > "��", "��", "��", "��", "��"
		�̸��� 3��°-- > "��", "��", "��", "��", "��"



		����2) ���� ���� ���� �����ϰ� �߻��ϵ��� �Ͽ� 50���� Ǯ������ �����Ͽ�
		�迭�� ����.

		- ����1) last���� �����ϰ� 1���� �迭 ��Ұ��� ����
		- ����2) first���� �����ϰ� 1���� �迭 ��Ұ��� ����
		- ����3) mid���� �����ϰ� 1���� ���� ����
		- ����4) Ǯ������ ������ �迭�� ����
		- ����5) �����ϰ� ������ 3���� ������ ���ļ� �ϳ��� ��ü �̸����� ����.



		����3) ������ Ǯ���� 50���� ���Ͽ� ����.
		����4) ���Ͽ� ����� �̸����� �о ����Ҷ��� ���κ��� ��� �ٶ�.

	*/

	setlocale(LC_ALL, "");

	wchar_t first[] = L"���������";
	wchar_t mid[] =  L"�ٻ������" ;
	wchar_t last[] =  L"�����ٶ�" ;

	wchar_t name[10][3];

	srand(time(0));
	wprintf(L"1��° %c\n", first[rand() % 5]);
	wprintf(L"2��° %c\n", mid[rand() % 5]);
	wprintf(L"3��° %c\n", last[rand() % 5]);
	//wprintf(L"0��° %c%c\n", wcscat(first[rand() % 5],last[rand() % 5]));
	//printf("strcat : %s", strcat(first[rand() % 5], last[rand() % 5]));

	
	for (int i = 0; i < 10; i++) {
		//printf("i �� �� : %d\n", i);
		for (int j = 0; j < 3; j++) {

			

			if (j == 0) {
				//printf("j 0�� �� : %d\n", j);
				name[i][0] = first[rand() % 5];
			}
			if(j == 1) {
				//printf("j 1�� �� : %d\n", j);
				name[i][1]= mid[rand() % 5];
			}
			if(j == 2) {
				//printf("j 2�� �� : %d\n", j);
				name[i][2]= last[rand() % 5];
			}


		}

	}

	

	for (int i = 0; i < 10; i++) {

		printf("i �� %d\n", i);
		wprintf(L"%c%c%c\n", name[i][0], name[i][1], name[i][2]);
		
		printf("\n");
	}

}

