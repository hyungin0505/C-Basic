// 07.loop_statement

// 과제 06
//사용자가 입력한 100 이하의 양의 정수에 대해 1부터 해당 정수까지의 합을 계산하여라

// while문과 for문을 이용하여 각 하나씩 프로그램을 작성하여라

#include <stdio.h>

int main(void) {
    int num;
    int result = 0;

    scanf("%d", &num);

    for (int i = 1; i < num+1; i++) {
        result += i;
    }

    printf("%d", result);

    return 0;
}