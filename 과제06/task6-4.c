// 07.loop_statement

// 과제 06
// 사용자가 입력한 100 이하의 자연수 값을 바탕으로 해당 번째의 피보나치 수를 계산하여라
// 피보나치 수열은 1, 1, 2, 3, 5, …로 시작한다
// 피보나치 수열이란 n번째의 값이 n-1번째와 n-2번째의 합인 수열이다

#include <stdio.h>

int main(void) {
    int num;
    unsigned long long num_list[100] = {1, 1, };
    unsigned long long result = 0;

    scanf("%d", &num);
    for (int i=0; i<num-2; i++) {
        result = num_list[i] + num_list[i+1];
        num_list[i+2] = result;
    }
    printf("%lld", num_list[num-1]);

    return 0;
}