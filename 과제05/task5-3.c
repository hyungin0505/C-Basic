// 06.conditional_statement

//과제 05
// 사용자로부터 통장 잔고와 등급을 입력 받아 이자를 더한 통장 잔고를 출력하여라
// 통장 잔고 출력 시 소수부분은 표시하지 않는다
// 통장 잔고는 양의 정수이고 등급은 A, B, C, D, E 중 하나이다
// 등급 A, B, C, D, E에 따라 각각 이자를 5%, 4%, 2%, 1%, 0.5%로 산정한다

#include <stdio.h>

int main(void) {
    int balance;
    char grade;
    
    scanf("%d %c", &balance, &grade);
    switch(grade) {
        case 'A':
        printf("%d", balance + balance * 5 / 100);
        break;
        case 'B':
        printf("%d", balance + balance * 4 / 100);
        break;
        case 'C':
        printf("%d", balance + balance * 2 / 100);
        break;
        case 'D':
        printf("%d", balance + balance * 1 / 100);
        break;
        case 'E':
        printf("%d", balance + balance * 1 / 200);
        break;
    }

    return 0;
}