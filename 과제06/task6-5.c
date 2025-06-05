// 07.loop_statement

// 과제 06
// 사용자가 입력한 1000 이하의 자연수에 대해 소수를 판별하여라

// 소수 판별법
// 자연수 N이 주어졌을 때 2부터 N-1까지의 수로 한번도 나누어지지 않는다면 소수이다

#include <stdio.h>

int main(void) {
    int num;

    scanf("%d", &num);
    for (int i=2; i<num-1; i++) {
        if (num % i == 0) {
            printf("%d is not a prime number.", num);

            return 0;
        }
    }
    printf("%d is a prime number.", num);

    return 0;
}