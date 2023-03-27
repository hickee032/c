#include <stdio.h>

int main() {

	/*한글을 배열에 저장하고 출력 할때  한글자씩 출력을 하면 출력이 안됨*/

	char arr[] = "안녕하세요" ; //5
	printf("첫 글자는 : %c\n", arr[0]);

	//한글은 2byte 이기때문에 1byte 2개를 사용한다.
	//그렇기 때문에 
	//2(한글 수) + 1 
		//+1 을 하는 이유는 문자의 끝을 알리는 데이터로 null 의미

	//배열의 길이를 알아냄
	int lenght = sizeof(arr) / sizeof(char);

	printf(">배열 길이<  %d\n", lenght); // 11

	printf("첫글자는 : %c%c\n", arr[0],arr[1]);

	//for문으로 출력
	for (int i = 0; i < lenght; i++)
	{
		ptintf(arr[i]);
	}
	//정상적인 출력이 안된다

	//putchar();
	for (int j = 0; j < lenght; j++)
	{
		putchar(arr[j]);
	}
	//정상 출력이 된다

	printf("------------------------------------\n");

	//주의점
	for (int i = 0; i < lenght-1; i++)
	{
		putchar(arr[i]);
	}



}