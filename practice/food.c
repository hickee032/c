#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	메뉴 선택은 문자로 처리

	----------------
	식사 주문
	----------------
	원하는 식사 선택
	----------------
	a.김치찌개	5000
	b.된장찌개	5000
	c.칼국수		4500
	d.잔치국수	4000
	e.비빔밥		5000
	----------------
	메뉴 선택 :

	*/

int main() {

	char select;

	printf("--------------------\n");
	printf("------식사 주문-----\n");
	printf("--------------------\n");
	printf("a.김치찌개\t5000\nb.된장찌개\t5000\nc.칼국수\t4500\nd.잔치국수\t4000\ne.비빔밥\t5000\n");
	printf("--------------------\n");
	printf("메뉴 선택 : ");

	scanf("%c", &select);

	switch (select) {

	case 65:
	case 97 :
		printf("김치 찌개");
		break;
	case 66:
	case 98:
		printf("된장 찌개");
		break;
	case 67:
	case 99:
		printf("칼국수");
		break;
	case 68:
	case 100:
		printf("잔치국수");
		break;
	case 69:
	case 101:
		printf("비빔밥");
		break;
	default:
		printf("메뉴가 없다 종료");
		break;
	}


}