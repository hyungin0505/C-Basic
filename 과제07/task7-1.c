// 08.function

// 과제 07
// 이차함수의 근의 개수를 판별하는 함수를 작성하여라
// 사용자로부터 자연수 a, b, c를 입력 받아 근의 개수를 출력한다
// 1. 판별식 > 0 : Two different real values 출력
// 2. 판별식 == 0 : Two same real values 출력
// 3. 판별식 < 0 : Two different complex values 출력

#include <stdio.h>

void count_solution(int a, int b, int c) {
    int check;

    check = b*b - 4*a*c;

    if (check == 0) printf("Two same real values");
    else if (check > 0) printf("Two different real values");
    else printf("Two different real values");
}

int main(void) {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    count_solution(a, b, c);

    return 0;
}