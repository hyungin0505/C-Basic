// 10.pointer

// 과제 10
// 사용자로부터 배열 크기와 원소 값을 입력받아 출력하여라
// 배열 크기를 입력받은 후 동적 할당을 통해 메모리 공간을 할당받는다
// 프로그램 종료 전에 반드시 할당된 모든 메모리를 회수한다

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int size;
    int tmp;

    printf("Type the length of array: ");
    scanf("%d", &size);

    int *array = (int *)malloc(size*sizeof(int));
    
    printf("Type the elements of array: ");
    for (int i=0; i<size; i++) {
        scanf("%d", &tmp);
        array[i] = tmp;
    }

    for (int j=0; j<size; j++) {
        printf("%d ", array[j]);
    }

    free(array);

    return 0;
}