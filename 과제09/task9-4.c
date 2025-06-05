// 10.pointer

// 과제 09
// 사용자로부터 5개의 정수를 입력 받아 배열에 저장하여라
// 그 후 반환 값이 없는(void) swap 함수를 통해 배열의 첫 번째 원소와 다섯 번째 원소의 값을 바꾸어라
// swap 함수를 사용한 후 배열의 원소를 모두 출력하여라

#include <stdio.h>

void swap(int *array) {
    int tmp;
    tmp = *(array);
    *(array) = *(array+4);
    *(array+4) = tmp;
}

int main(void) {
    int array[5];

    for (int i=0; i<5; i++) {
        scanf("%d", array+i);
    }

    swap(array);

    for (int j=0; j<5;j++) {
        printf("%d ", *(array+j));
    }
    
    return 0;
}