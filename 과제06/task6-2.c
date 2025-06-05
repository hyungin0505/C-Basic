// 07.loop_statement

// 과제 06
// 사용자로부터 5개의 정수를 입력 받아 평균을 출력하여라
// 평균값은 소수 셋째자리까지 표시하여라

#include <stdio.h>

int main(void) {
    int num;
    double avg;

    for (int i=0; i<5; i++) {
        scanf("%d", &num);
        avg += num;
    }
    printf("%.3lf", avg/5);

    return 0;
}