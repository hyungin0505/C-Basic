// 09.array

// 과제 08
// 길이 10인 임의의 배열에서 숫자 10의 위치(index)를 찾아 원래 배열과 함께 출력하여라
// 만약 배열 내에 숫자 10이 없을 경우-1을 출력한다
// 만약 숫자 10이 중복될 경우 가장 왼쪽의 숫자 10을 대상으로 하여 위치를 출력한다

#include <stdio.h>

int main(void) {
    int array[10] = { 1, 3, -20, 1, 5, 10, 2, 5, 9, 10};
    int index = -1;

    int check = 0;
    for (int i=0; i<10; i++) {
        if (array[i] == 10 && check != 1) {
            index = i;
            check = 1;
        }
        printf("%d ", array[i]);
    }

    printf("\nIndex: %d", index);

    return 0;
}