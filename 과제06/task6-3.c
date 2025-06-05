// 07.loop_statement

// 과제 06
// A, B, C 외의 값을 입력 받으면 다시 입력을 기다리는 프로그램을 작성하여라
// A, B, C의 값이 입력되면 각각 100, 90, 80을 출력하여라ㄴ

#include <stdio.h>

int main(void) {
    char letter;

    while (letter != 'A' && letter != 'B' && letter != 'C') {
        letter = getchar();
        getchar(); // 널 문자 처리용
        switch(letter) {
            case 'A': printf("100"); break;
            case 'B': printf("90"); break;
            case 'C': printf("80"); break;
            default: printf("Please enter a current value again.\n");
        }
    }
    
    return 0;
}