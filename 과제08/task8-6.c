// 09.array

// 과제 08
// 길이 10의 배열의 순서를 뒤집어 새로운 배열을 만든 후 원래 배열과 함께 출력하여라

#include <stdio.h>

int main(void) {
    int array[10] = {1,2,3,4,5,6,7,8,9,10};

    for (int i=0; i<10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    for (int i=9; i>=0; i--) {
        printf("%d ", array[i]);
    }

    return 0;
}