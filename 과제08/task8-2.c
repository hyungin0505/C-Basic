// 09.array

// 과제 08
// 사용자로부터 각 배열 요소의 값을 입력 받아 배열을 만든 후 출력하여라 (출력방식 자유)
// 배열 길이는 5로 한다

#include <stdio.h>

int main(void) {
    int num[5];
    int tmp;

    for (int i=0; i<5; i++) {
        printf("Enter the array value #%d: ", i+1);
        scanf("%d", &tmp);
        num[i] = tmp;
    }

    for (int j=0; j<5; j++) {
        printf("%d ", num[j]);
    }

    return 0;
}