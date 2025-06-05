// 08.function

// 과제 07
// 주어진 자연수 번째의 피보나치 수를 계산하는 함수를 작성하여라
// 피보나치 수는 수열의 n-2, n-1번째 값을 더하면 n번째 값이 되는 수열이다
// 이때 피보나치 수열은 0, 1, 1, 2, 3, 5, 8, …로 정의한다

// 사용자로부터 자연수를 입력 받아 해당 번째의 피보나치 수를 출력한다

#include <stdio.h>

int fibo(int num) {
    int a = 0, b = 1, c = 1;

    if (num == 1) return a;
    if (num == 2) return b;

    for (int i=3; i<num; i++) {
        a = b;
        b = c;
        c = a + b;
    }

    return c;
}

int main(void) {
    int num;

    scanf("%d", &num);
    printf("%d", fibo(num));

    return 0;
}