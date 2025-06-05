// 05.stdio

// 과제 04
// 정수와 실수를 한 번에 입력하고 출력하기

//포맷을 적용하여 출력한다
// 정수는 10칸을 확보(width)하고 왼쪽 정렬(flag: -)하며 부호 자리(flag: ‘ ‘)를 비워둔다
// 실수는 10칸을 확보(width)하고 소수는 둘째자리(.precision)까지 표시하며 부호를 항상 표시(flag: ‘+’)한다

#include <stdio.h>

int main(void) {
    int rational;
    double real;

    scanf("%d %lf", &rational, &real);
    printf("% -10d %+10.2lf", rational, real);

    return 0;
}