// 10.pointer

// 과제 09
// 길이 5인 정수 배열을 만든 후
// 사용자가 입력한 4개의 값을 첫번째 원소부터 연달아 저장하고 5번째 원소에는 합을 저장하여라
// 그 후 배열의 모든 원소를 출력하여라

#include <stdio.h>

int main(void) {
    int num_array[5];
    int value;
    int sum = 0;

    printf("Give four numbers: ");
    for (int i=0; i<4; i++) {
        scanf("%d", &value);
        num_array[i] = value;
        sum += value;
    }
    num_array[4] = sum;

    for (int j=0; j<5;j++) {
        printf("%d ", *(num_array + j));
    }

    return 0;
}