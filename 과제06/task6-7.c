// 07.loop_statement

// 과제 06
// 사용자가 입력한 19 이하의 홀수에 대해 다이아몬드 모양의 별을 출력하여라

// 별은 가장 윗층부터 1개, 3개, 5개, …순으로 증가하며
// 사용자가 입력한 홀수개만큼 별을 찍은 후 다시 …, 5개, 3개, 1개 순으로 줄어든다
// 모든 별은 가운데 정렬되어 출력된다

#include <stdio.h>

int main(void) {
    int num;

    scanf("%d", &num);
    for (int i=0; i<num/2; i++) {
        for (int j=num/2; j>i; j--) {
            printf(" ");
        }
        for (int x=0; x<2*i+1; x++) {
            printf("*");
        }
        printf("\n");
    }
    for (int k=0; k<num; k++) {
        printf("*");
    }
    printf("\n");
    for (int h=num/2; h>0; h--) {
        for (int j=num/2; j>=h; j--) {
            printf(" ");
        }
        for (int x=0; x<2*h-1; x++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}