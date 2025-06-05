// 06.conditional_statement

//과제 05
// 세 정수를 입력 받아 그 중 가장 큰 수를 출력하여라

#include <stdio.h>

int main(void) {
    int num1, num2, num3;
    int max = 0;
    scanf("%d %d %d", &num1, &num2, &num3);

    max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    printf("%d", max);

    return 0;
}