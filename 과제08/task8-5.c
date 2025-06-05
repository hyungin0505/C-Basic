// 09.array

// 과제 08
// 길이 10인 임의의 배열로부터 평균을 계산하여 원래 배열과 함께 출력하여라
// 평균은 소수 셋째자리까지 출력하여라

#include <stdio.h>

int main(void) {
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    float average = 0;

    for (int i=0; i<10; i++) {
        printf("%d ", array[i]);
        average += array[i];
    }
    printf("\n%.3f", average/10.0);

    return 0;
}