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

	wchar_t first[] =  L"���������" ;
	wchar_t mid[] = {L"�ٻ������"};
	wchar_t last[] = { L"�����ٶ�" };

	wchar_t name[50][3];

	wprintf(L"first : %s\n", first);
	int len1 = wcslen(first);
	printf("���ڿ� ���� %d\n", len1);
	wprintf(L"0��° %c\n", first[0]);
	
	srand(time(0));
	printf("���� ���� 0~ 5\n");
	printf("ran : %d\n", rand() % 5);
	printf("ran : %d\n", rand() % 5);
	printf("ran : %d\n", rand() % 5);
	printf("ran : %d\n", rand() % 5);
	printf("ran : %d\n", rand() % 5);


	printf("-------------------\n");
	
	wprintf(L"mid : %s\n", mid);
	printf("-------------------\n");

	wprintf(L"last : %s\n", last);
	printf("-------------------\n");




}
