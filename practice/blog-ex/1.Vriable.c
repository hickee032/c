#include <stdio.h>
int main() {

	/*
	1.원의 면적을 구하는 프로그램
		원주율을 PI 실수형 변수 3.14
		원의 반지름 실수형 변수 임의의 값으로 설정
		원의 변적 출력
	*/
	double PI = 3.14; //pi 설정
	double radius = 5.0; //반지름 설정

	printf("원의 면적은 %.2f\n", radius * radius * PI);

	printf("---------------------------------------------------");

	/*
	2.성적표를 구하는 프로그램
		국어, 영어, 수학, 과학 정수형 변수
		국어 90, 영어 80, 수학 70, 과학 60
		모든과목 평균, 총점 변수
	*/
	int guk = 90;
	int eng = 80;
	int math = 70;
	int sia = 60;

	double avr = 0;
	int total = 0;

	printf("평균값 : %d\t", (guk + eng + math + sia) / 4);
	printf("총합 : %d\n", guk + eng + math + sia);

	printf("---------------------------------------------------");

	/*
	3.알파벳과 한글의 자음, 모음을 구하는 프로그램
	  알파벳 자음, 모음 정보는 검색
	  알파벳 자음, 모음 한글 자음, 모음 변수를 생성하고 초기값 0
	  각 변수에 대해서 자음, 모음 갯수 입력
	  알파벳 자음,모음과 한글 자음, 모음의 갯수 출력
	 */

	int con = 0; //영어 자음 BCDFGHJKLMNPQRSTVWXYZ 21개
	int vowel = 0; //영어 모음 A E I O U 5개

	int Hcon = 0; //한글 자음 19개
	int Hvowel = 0;//한글 모음 21개

	scanf("한글 자음 입력 : %d 한글 모음 입력 : %d", Hcon, Hvowel);
	scanf("영어 자음 입력 : %d 영어 모음 입력 : %d", con, vowel);

	printf("한글 자음 %d개 모음 %d개 영어 자음 %d개 모음 %d개", Hcon, Hvowel, con, vowel);



}