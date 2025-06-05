// 11.string

// 과제 11
// 사용자가 입력한 문자열에서 모든 알파벳의 대소문자를 바꾸어 출력하여라
// 힌트: 알파벳 여부는 문자가 ‘A’-’Z’와 ‘a’-’z’ 사이에 포함되는지를 통해 알 수 있다

#include <stdio.h>
#include <string.h>

int main(void) {
    char *string = "Hello world!";
    int length = 0;

    length = strlen(string);
    for (int i=0; i<length; i++) {
        if (('a' <= string[i]) && (string[i] <= 'z')) printf("%c", string[i]-'a'+'A');
        else if (('A' <= string[i]) && (string[i] <= 'Z')) printf("%c", string[i]-'A'+'a');
        else printf("%c", string[i]); 
    }
    
    return 0;
}