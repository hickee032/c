#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
/*7.
-------------------------
파일 제어 프로그램
-------------------------
1.이름 생성 파일에 저장
2.파일에서 이름 읽어오기
3.프로그램 종료
-------------------------
	이름 1 ->"김","박","이","최","장"
	이름 2 ->"바", "사", "아", "자", "차"
	이름 3 ->"가", "나", "다", "라", "마"

랜덤하게 발생하도록 하여 50개의 풀네임 생성후 배열에 저장
*/
	char arr1[11] = "김박이최장";
	char arr2[11] = "바사아자차";
	char arr3[11] = "가나다라마";

	int select = 0;

	 int arr[50];

	printf("-------------------------\n");
	printf("파일 제어 프로그램\n");
	printf("-------------------------\n");
	printf("1.이름 생성 파일에 저장\n");
	printf("2.파일에서 이름 읽어오기\n");
	printf("3.프로그램 종료\n");
	printf("-------------------------\n");

	scanf("%d", &select);

	srand(time(NULL));

	switch (select){
	case 1 :
		//50개의 이름을 생성
		//N, T 까지의 범위의 난수를 생성하고싶다면
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
		printf("잘못된 번호 선택");
		break;
	}
}