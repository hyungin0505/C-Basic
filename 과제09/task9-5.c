// 10.pointer

// 과제 09
// 사용자로부터 5개의 정수를 입력 받아 배열에 저장하여라
// 그 후 반환 값이 없는(void) minmax_scale 함수를 통해 배열을 최대-최소 정규화하여라
// 최대-최소 정규화: 집합 내 최댓값과 최솟값이 각 1과 0이 되도록 선형(linear) 정규화하는 방법
// 모든 원소에 집합의 최솟값을 빼고 집합의 (최댓값– 최솟값)으로 나누어 정규화함 (x – min) / (max - min)
// minmax_scale 함수를 사용한 후 배열의 원소를 모두 출력하여라 (소수 첫째자리까지 출력)

#include <stdio.h>

void minmax_scale(double *array) {
    double max = *array;
    double min = *array;

    for (int i=1; i<5; i++) {
        if (*(array+i) > max) max = *(array+i);
        if (*(array+i) < min) min = *(array+i); 
    }

    for (int j=0; j<5; j++) {
        *(array+j) = (*(array+j)-min)/(max-min);
    }
}

int main(void) {
    double array[5];
    double num;

    for (int i=0; i<5; i++) {
        scanf("%lf", array+i);
    }

    minmax_scale(array);

    for (int j=0; j<5; j++) {
        printf("%.1lf ", *(array+j));
    }

    return 0;
}