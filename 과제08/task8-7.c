// 09.array

// // 과제 08
// 사용자로부터 N개의 이차원 좌표를 입력 받아 평균 좌표(x, y)를 출력하여라
// N개의 좌표는 이차원 배열에 저장한다
// 평균 좌표는 각 소수 셋째자리까지 출력한다

// cf. scanf(“%d”, &length);
// int array[length]; // 이러한 형태의 코드 사용은 C99에서 정의됨

// 가변 길이 배열 (Variable-length Array; VLA)
// 배열의 길이를 프로그램 실행 중 결정할 수 있는 기능
// 런타임에 배열의 길이를 결정할 수 있는 기능이라고도 한다

// C99부터 포함된 기능
// 이전 버전의 컴파일러나 Microsoft에서 제공하는 일부 컴파일러에서는 동작하지 않을 수 있다

// #include <stdio.h>
// #include <stdio.h>
// int main() {
//     int length = 0;
//     scanf("%d", &length);
//     int array[length];
//     for (int i = 0 ; i < length ; i++) {
//         array[i] = 0;
//     }
//     return 0;
// }

#include <stdio.h>

int main(void) {
    int length;
    float x_average = 0;
    float y_average = 0;

    printf("Enter the number of coordinates: ");
    scanf("%d", &length);

    int array[length][2];

    for (int i=0; i<length; i++) {
        printf("Enter the #%d coordinate: ", i+1);
        scanf("%d %d", &array[i][0], &array[i][1]);

        x_average += array[i][0];
        y_average += array[i][1];
    }

    printf("%.3f %.3f", x_average/length, y_average/length);


    return 0;
}