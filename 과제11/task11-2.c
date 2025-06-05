// 11.string

// 과제 11
// 사용자로부터 문자열 개수와 전체 문자열을 입력받은 후 내용을 출력하여라
// 힌트: 동적 할당을 통해 문자열 배열을 생성

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int num = 0;

    scanf("%d", &num);
    getchar();

    char **string = (char **)malloc(num*(sizeof(char *)));

    for (int i=0; i<num; i++) {
        string[i] = (char *)malloc(100*sizeof(char));
        fgets(string[i], 100, stdin);
    }
    for (int j=0; j<num; j++) {
        fputs(string[j], stdout);
        free(string[j]);
    }
    free(string);

    return 0;
}