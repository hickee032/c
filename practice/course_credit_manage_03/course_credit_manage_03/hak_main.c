#include "def.h"
#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include "cui.h"
#include "menu.h"
#include "haksa.h"
#include "file_util.h"
#include "util.h"
#include "output_print.h"


int main() {

	//ShowWindow(GetConsoleWindow(), SW_MAXIMIZE); �ܼ�â ������ �ִ�ũ��� ����
	//GetConsoleWindow() �ܼ�â�� ������ ��� ��.
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	fontcolor(LIGHT_CYAN); //��Ʈ����
	set_cursot_type(NOCURSOR); //Ŀ���� �Ⱥ��̰�
	title();
	_getch();//��� ��� ����
	system("cls");  //�ܺ� ������ ���� - �ܼ��� �ʱ�ȭ
	fontcolor(14);
	set_cursot_type(NORMAL_CURSOR); //�Ϲ� Ŀ���� ����

	//ger_time();
	//���� �޴�
	while (1) {

		switch (main_menu()) {
		case MA_INPUT:
			printf("������ �Է�\n");
			std_lecture_input();
			break;	
		case MA_SHOW:
			printf("������ ���\n");
			//std_enrolment();
			fileRead();
			break;
		case MA_UPDATE:
			printf("������ ����\n");
			fileChange();
			break;
		case MA_DELETE:
			printf("������ ����\n");
			break;
		case MA_SEARCH:
			printf("������ �˻�\n");
			fileSearch();
			break;
		case MA_INIT:
			printf("������ �ʱ�ȭ\n");
			fileInit();
			break;
		case MA_EXIT:
			printf("���α׷��� �����մϴ�.\n");
			exit(0);
			break;
		case 0:
			
			break;
		}
		system("pause"); //�Ͻ�����
		system("cls");
	}
	
}