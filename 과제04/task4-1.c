// 05.stdio

// 과제 04
// 문자를 하나 입력한 후 출력한다

#include <stdio.h>

int main(void) {
    int letter = getchar();

    putchar(letter);
    // 바이너리 실행 시 출력값 뒤 % 기호는 zsh 터미널 기본 설정 때문입니다

    return 0;
}