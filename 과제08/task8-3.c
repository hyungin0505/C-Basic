// 09.array

// 과제 08
// 사용자로부터 배열 길이와 각 배열 요소의 값을 입력 받아 배열을 만든 후 출력하여라 (출력방식 자유)
// 배열의 각 값은 1, 2, …, 10으로 한다

#include <stdio.h>

int main(void) {
    int length = 0;
    // malloc 함수로 동적 배열 생성도 가능
    int array[100];
    int tmp;

    printf("Enter the length of array: ");
    scanf("%d", &length);

    for (int i=0; i<length; i++) {
        printf("Enter the array value #%d: ", i+1);
        scanf("%d", &tmp);
        array[i] = tmp;
    }

    for (int j=0; j<length; j++) {
        printf("%d ", array[j]);
    }

    return 0;
}