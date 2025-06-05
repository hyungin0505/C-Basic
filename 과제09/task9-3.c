// 10.pointer

// 과제 09
// 사용자로부터 두 개의 정수를 입력 받아라
// 그 후 반환 값이 없는(void) abs 함수를 통해 두 개의 정수를 절댓값으로 바꾸어라
// abs 함수를 사용한 후 두 정수 값을 모두 출력하여라

#include <stdio.h>

void abs(int num) {
    if (num < 0) printf("%d ", num * (-1));
    else printf("%d ", num);
}

int main(void) {
    int num1, num2;

    scanf("%d %d", &num1, &num2);
    abs(num1);
    abs(num2);

    return 0;
}