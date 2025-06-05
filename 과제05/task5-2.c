// 06.conditional_statement

//과제 05
// 알파벳 문자 하나를 입력 받은 후
// 입력 값이 소문자라면 대문자로, 대문자라면 소문자로 바꾸어 출력한다
// 모든 대문자와 소문자는 동일한 값만큼의 차이가 있다
// 다시 말해 ‘a’-’A’ = ‘b’-’B’ = ‘c’-’C’ = … = ‘z’-’Z’이다
// 그러므로 입력된 대문자에 ‘a’-’A’만큼을 더해주면 소문자가, 소문자에 'A'-'a'만큼 더해주면 대문자가 된다

#include <stdio.h>

int main(void) {
    char character;
    character = getchar();

    if ('a' <= character && character <= 'z') {
        printf("%c", character + 'A'-'a');
    }
    else {
        printf("%c", character + 'a'-'A');
    }

    return 0;
}