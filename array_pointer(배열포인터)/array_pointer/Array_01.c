#include <stdio.h>

int main() {
    int num = 0;
    int sz1,sz2;

    sz1 = sizeof(num); // ���� num�� �ڷ��� ũ�⸦ ����
    sz2 = sizeof num ; //��ȣ�� �ʼ��� �ƴϴ�.

    printf("num ũ��: %d byte\n", sz1);
    printf("num ũ��: %d byte\n", sz2);

}