#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	�޴� ������ ���ڷ� ó��

	----------------
	�Ļ� �ֹ�
	----------------
	���ϴ� �Ļ� ����
	----------------
	a.��ġ�	5000
	b.�����	5000
	c.Į����		4500
	d.��ġ����	4000
	e.�����		5000
	----------------
	�޴� ���� :

	*/

int main() {

	char select;

	printf("--------------------\n");
	printf("------�Ļ� �ֹ�-----\n");
	printf("--------------------\n");
	printf("a.��ġ�\t5000\nb.�����\t5000\nc.Į����\t4500\nd.��ġ����\t4000\ne.�����\t5000\n");
	printf("--------------------\n");
	printf("�޴� ���� : ");

	scanf("%c", &select);

	switch (select) {

	case 65:
	case 97 :
		printf("��ġ �");
		break;
	case 66:
	case 98:
		printf("���� �");
		break;
	case 67:
	case 99:
		printf("Į����");
		break;
	case 68:
	case 100:
		printf("��ġ����");
		break;
	case 69:
	case 101:
		printf("�����");
		break;
	default:
		printf("�޴��� ���� ����");
		break;
	}


}