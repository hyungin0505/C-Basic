// 08.function

// 과제 07
// 주어진 자연수가 소수인지 아닌지 판별하는 함수를 작성하여라
// 사용자로부터 자연수를 입력 받아 소수인지 아닌지 출력한다

#include <stdio.h>

void check_prime(int num) {
    int is_prime = 1;
    if (num == 1) {
        is_prime = 0;
    }
    else {
        for (int i=2; i<num; i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }
    switch (is_prime) {
        case 0:
            printf("%d is not a prime number", num);
            break;
        case 1:
            printf("%d is a prime number", num);
            break;
    }

}

int main(void) {
    int num;

    scanf("%d", &num);
    check_prime(num);

    return 0;
}