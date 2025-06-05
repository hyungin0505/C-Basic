// 10.pointer

// 과제 10
// 예제 6의 예제에서 동적 할당한 공간을 다시 두 배 크기로 복제/확장하여 출력하여라
// 기존의 동적 할당된 공간은 반드시 해제하며 프로그램 종료 전에 반드시 할당된 모든 메모리를 회수한다

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int size;
    int tmp;

    printf("Type the length of array: ");
    scanf("%d", &size);

    int *array = (int *)malloc(size*sizeof(int));
    array = realloc(array, size*sizeof(int));
    
    printf("Type the elements of array: ");
    for (int i=0; i<size; i++) {
        scanf("%d", &tmp);
        array[i] = tmp;
        array[i+size] = tmp;
    }

    for (int j=0; j<size*2; j++) {
        printf("%d ", array[j]);
    }

    free(array);

    return 0;
}