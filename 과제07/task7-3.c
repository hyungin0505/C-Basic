// 08.function

// 과제 07
// 주어진 자연수 이하의 모든 자연수에 대해 소수 개수를 구하는 함수를 작성하여라
// 사용자로부터 자연수를 입력 받아 해당 자연수 이하의 모든 소수 개수를 출력한다

#include <stdio.h>

int count_prime(int num) {
    int result = 0;
    int is_prime;

    if (num == 1) result ++;
    for (int i=2; i<=num; i++) {
        is_prime = 1;
        for (int j=2; j<i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1) result++;
    }

    return result;
}

int main(void) {
    int num;

    scanf("%d", &num);
    printf("%d", count_prime(num));

    return 0;
}