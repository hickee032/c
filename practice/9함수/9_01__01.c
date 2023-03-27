#include<stdio.h>
int* getNumbers2() {
    static int arr[3][3] = { {3, 2, 1}, {6, 5, 4}, {7, 8, 9} };
    return arr;
}
int main() {
    int* nums = getNumbers2();
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) printf("%d ", *(nums + i * 3 + j));
        printf("| ");
    }
}