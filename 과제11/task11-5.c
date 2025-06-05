// 11.string

// 과제 11
// 사용자가 입력한 문장으로부터 단어 개수와 be동사 is의 출현 횟수를 출력하여라 (대문자 Is 포함)
// 힌트: strtok과 strcmp를 활용

#include <stdio.h>
#include <string.h>

int main(void) {
    char string[200] = {0, };
    int word = 0;
    int is = 0;
    char delimeter[2] = " ";
    char *token;

    fgets(string, 200, stdin);
    token = strtok(string, delimeter);

    while (token != NULL) {
        word++;
        if (!strcmp(token, "is") || !strcmp(token, "Is") || !strcmp(token, "IS")) is++;
        token = strtok(NULL, delimeter);
    }

    printf("Word count: %d, is count: %d", word, is);

    return 0;
}