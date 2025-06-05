// 08.function

// 과제 07
// 주어진 자연수에 대한 팩토리얼을 계산하는 함수를 작성하여라
// 정수 팩토리얼은 1부터 자기 자신까지의 모든 정수를 곱하여 계산한다

// 사용자로부터 자연수를 입력 받아 해당 자연수에 대한 팩토리얼을 출력한다

#include <stdio.h>

int factorial(int num) {
    int result = 1;
    
    for (int i=1; i<=num; i++) {
        result *= i;
    }

    return result;
}

int main(void) {
    int num;

    scanf("%d", &num);
    printf("%d", factorial(num));

    return 0;
}