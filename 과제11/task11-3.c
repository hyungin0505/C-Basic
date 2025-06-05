// 11.string

// 과제 11
// 사용자가 입력한 문자열을 뒤집어 저장하고 그 결과를 출력하여라

#include <stdio.h>
#include <string.h>

int main(void) {
    char string[100] = {0, };
    int length = 0;
    
    fgets(string, 100, stdin);
    length = strlen(string);

    for (int i=1; i<length; i++) {
        printf("%c", string[length-i-1]);
    }

    return 0;
}