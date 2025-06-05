// 11.string

// 과제 11
// 사용자가 단어를 입력할 때마다 기존 단어 뒤에 이어 붙여 출력하여라
// end를 입력하면 프로그램을 종료한다
// 힌트: 문자열의 길이 설정에 공들일 필요 없이 적당히 큰 길이의 문자열을 설정

#include <stdio.h>
#include <string.h>

int main(void) {
    char string[100] = {0, };
    char concat[50] = {0, };

    while (1) {
        scanf("%s", concat);
        if (!strcmp(concat, "end")) break; 
        strcat(string, concat);
        strcat(string, " ");
        fputs(string, stdout);
        printf("\n");
    }

    return 0;
}