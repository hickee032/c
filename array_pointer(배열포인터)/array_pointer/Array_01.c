#include <stdio.h>

int main() {
    int num = 0;
    int sz1,sz2;

    sz1 = sizeof(num); // 변수 num의 자료형 크기를 구함
    sz2 = sizeof num ; //괄호가 필수가 아니다.

    printf("num 크기: %d byte\n", sz1);
    printf("num 크기: %d byte\n", sz2);

}