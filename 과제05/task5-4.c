// 06.conditional_statement

//과제 05
// switch문을 이용하여 사칙연산 계산기를 만들어라
// 사용자로부터 정수, 문자, 정수를 입력 받고 두 정수를 입력 받은 연산자(문자)를 이용해 연산한다
// +, -, x의 경우 정수로 출력하나 /의 경우 소수 셋째 자리까지의 실수로 출력한다

#include <stdio.h>

int main(void) {
    int num1, num2;
    char operator;

    scanf("%d %c %d", &num1, &operator, &num2);
    switch(operator) {
        case '+':
        printf("%d", num1 + num2);
        break;
        case '-':
        printf("%d", num1 - num2);
        break;
        case '/':
        printf("%.3lf", (double)num1 / (double)num2);
        break;
        case '*':
        printf("%d", num1 * num2);
        break;
    }

    return 0;
}