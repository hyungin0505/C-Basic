// 05.stdio

// 과제 04
// 입력된 하나의 영어 대문자를 소문자로 바꾸어 출력한다

// 모든 대문자와 소문자는 동일한 값만큼의 차이가 있다
// 다시 말해 ‘a’-’A’ = ‘b’-’B’ = ‘c’-’C’ = … = ‘z’-’Z’이다
// 그러므로 입력된 대문자에 ‘a’-’A’만큼을 더해주면 소문자가 된다

#include <stdio.h>

int main(void) {
    int upper;

    upper = getchar();
    putchar(upper + ('a'-'A'));

    return 0;
}