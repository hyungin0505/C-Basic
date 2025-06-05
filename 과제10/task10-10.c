// 10.pointer

// 과제 10
// 사용자가 입력한 행과 열, 원소 정보를 이용해 이차원 배열을 만든 후 행렬을 전치하여 출력하여라
// 행렬 전치(transpose)는 모든 원소의 행과 열을 뒤바꾸는 연산을 의미한다
// 행렬 전치를 위한 새로운 동적 할당을 수행한다
// 프로그램 종료 전에 반드시 할당된 모든 메모리를 회수한다

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int row_size;
    int column_size;
    double average = 0;

    printf("Give the row and column length: ");
    scanf("%d %d", &row_size, &column_size);

    int **row = (int **)malloc(row_size*sizeof(int*));
    for (int i=0; i<row_size; i++) {
        row[i] = (int *)malloc(column_size*sizeof(int));
        printf("Give the #%d row elements: ", i+1);
        for (int j=0; j<column_size; j++) {
            scanf("%d", &row[i][j]);
            average += row[i][j];
        }
    }

    for (int h=0; h<column_size; h++) {
        for (int t=0; t<row_size; t++) {
            printf("%d ", row[t][h]);
        }
        printf("\n");
    }

    for (int k=0; k<row_size; k++) {
        free(row[k]);
    }
    free(row);

    return 0;
}