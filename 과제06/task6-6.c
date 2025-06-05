// 07.loop_statement

// 과제 06
// 사용자가 입력한 9 이하의 자연수에 대해 구구단을 출력하여라

#include <stdio.h>

int main(void) {
    int num;
    
    scanf("%d", &num);
    for (int i=0; i<9; i++) {
        printf("%d x %d = %d\n", num, i+1, num*(i+1));
    }
    
    return 0;
}