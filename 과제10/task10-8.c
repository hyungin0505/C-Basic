// 10.pointer

// 과제 10
// 초기 길이가 2인 정수형 vector를 구현한 후 데이터를 4회 입력하여 결과를 출력하여라
// vector란 배열 용량이 가득 찰 때마다 배열 용량을 두 배로 늘려 빈 공간을 반드시 확보하는 배열이다
// 매 데이터 입력 시 vector의 용량(capacity)를 함께 출력한다
// 프로그램 종료 전에 반드시 할당된 모든 메모리를 회수한다

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int tmp;
    int size = 2;

    int *vector = (int *)malloc(size*sizeof(int));

    for (int i=0; i<4; i++) {
        printf("Type the values: ");
        scanf("%d", &tmp);

        if (i+1 >= size) {
            size *= 2;
            vector = realloc(vector, size*sizeof(int));
        }
        vector[i] = tmp;
        
        for (int j=0; j<i+1; j++) {
            printf("%d ", vector[j]);
        }
        printf("(Capacity: %d)\n", size);
    }

    free(vector);

    return 0;
}