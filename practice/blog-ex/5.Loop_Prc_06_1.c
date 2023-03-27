#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*무한루프를 사용
	메뉴선택을 잘못하면 잘못된 입력입니다
	메뉴를 선택하더라고 메뉴는 항상 보이게*/

	int select = 0;

	while (1)
	{
		printf("---------------\n");
		printf("1.파일 생성\n");
		printf("2.파일 읽기\n");
		printf("3.종료\n");
		printf("---------------\n");
		printf("메뉴를 선택하세요 : ");
		scanf("%d", &select);

		if (1<=select &&select <= 3)
		{
			if (select == 1) {
				printf("파일이 생성됩니다.\n");
			}
			if (select == 2) {
				printf("파일을 읽습니다.\n");
			}
			if (select == 3)
			{
				printf("프로그램 종료.\n");
				break;
			}
			
		}
		else
		{
			printf("다시 선택.\n");
		}

		


	}



}