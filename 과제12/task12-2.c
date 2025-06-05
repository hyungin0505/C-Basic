// 12.structure

// 과제 12
// 사용자로부터 음식 개수와 음식 정보를 예제 1의 구조체를 통해 입력받고 출력하여라

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Food {
    char name[50];
    int price;
};

int main(void) {
    struct Food food;

    int time;
    printf("How many foods do you have: ");
    scanf("%d", &time);

    char **food_name = (char **)malloc(time*(sizeof(char *)));
    int **food_price = (int **)malloc(time*(sizeof(int *)));

    for (int i=0; i<time; i++) {
        food_name[i] = (char *)malloc(50*sizeof(char *));
        food_price[i] = (int *)malloc(sizeof(int *));

        printf("Give the name of food (#%d): ", i+1);
        scanf("%s", food_name[i]);
        memset(food.name, 0, strlen(food_name[i]));
        strncat(food.name, food_name[i], sizeof(food_name[i]));

        printf("Give the price of food (#%d): ", i+1);
        scanf("%d", food_price[i]);
    }

    for (int j=0; j<time; j++) {
        printf("#%d: %s (%d)\n", j+1, food_name[j], *food_price[j]);
    }

    return 0;
}