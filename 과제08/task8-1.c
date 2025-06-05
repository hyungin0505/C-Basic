// 09.array

// 과제 08
// 길이가 10인 정수 배열을 만들고 이를 출력하여라 (출력방식 자유)
// 배열의 각 값은 1, 2, …, 10으로 한다

#include <stdio.h>

int main(void) {
    int num_array[10] = {1,2,3,4,5,6,7,8,9,10};

    for (int i=0; i<10; i++) {
        printf("%d ", num_array[i]);
    }

    return 0;
}