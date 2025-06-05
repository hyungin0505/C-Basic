// 10.pointer

// 과제 09
// 임의의 배열을 만들고 사용자가 입력한 위치의 원소를 출력하여라
// 배열 원소에 접근할 때 포인터를 사용한다
// 범위를 벗어날 경우 Out of range를 출력한다

#include <stdio.h>

int main(void) {
    int num_array[4] = {3,6,2,4};
    int index;

    printf("Array: ");
    for (int i=0; i<sizeof(num_array)/sizeof(int); i++) {
        printf("%d ",*(num_array+i));
    }

    printf("\nGive the index number: ");
    scanf("%d", &index);

    if (index > sizeof(num_array)/sizeof(int)) {
        printf("Out of range");
        return 0;
    }
    printf("%d", *(num_array+index-1));

    return 0;
}