#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
/*7.
-------------------------
���� ���� ���α׷�
-------------------------
1.�̸� ���� ���Ͽ� ����
2.���Ͽ��� �̸� �о����
3.���α׷� ����
-------------------------
	�̸� 1 ->"��","��","��","��","��"
	�̸� 2 ->"��", "��", "��", "��", "��"
	�̸� 3 ->"��", "��", "��", "��", "��"

�����ϰ� �߻��ϵ��� �Ͽ� 50���� Ǯ���� ������ �迭�� ����
*/
	char arr1[11] = "���������";
	char arr2[11] = "�ٻ������";
	char arr3[11] = "�����ٶ�";

	int select = 0;

	 int arr[50];

	printf("-------------------------\n");
	printf("���� ���� ���α׷�\n");
	printf("-------------------------\n");
	printf("1.�̸� ���� ���Ͽ� ����\n");
	printf("2.���Ͽ��� �̸� �о����\n");
	printf("3.���α׷� ����\n");
	printf("-------------------------\n");

	scanf("%d", &select);

	srand(time(NULL));

	switch (select){
	case 1 :
		//50���� �̸��� ����
		//N, T ������ ������ ������ �����ϰ�ʹٸ�
		//rand() % (T - N + 1) + N 
		for (int i = 0; i < 50; i++)
		{
			arr[i] = 
		}
		break;
	case 2 :
		printf("select2 : %d", select);
		break;
	case 3 :
		printf("select3 : %d", select);
		break;
	default:
		printf("�߸��� ��ȣ ����");
		break;
	}
}