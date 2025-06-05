// 12.structure

// 과제 12
// 예제 1의 구조체로 만든 두 변수의 값을 교환(swap)하는 함수를 만들고 그 결과를 출력하여라 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Food {
    char name[50];
    int price;
} Food;

void swap(Food *food1, Food *food2) {
    char tmp_name[50] = {0, };
    int tmp_price;

    strcpy(tmp_name, food1->name);
    tmp_price = food1->price;

    strcpy(food1->name, food2->name);
    food1->price = food2->price;

    strcpy(food2->name, tmp_name);
    food2->price = tmp_price;
}

int main(void) {
    struct Food food1;
    struct Food food2;

    char food_name[50];

    printf("Give the name of food (#1): ");
    scanf("%s", food_name);
    memset(food1.name, 0, strlen(food_name));
    strncat(food1.name, food_name, sizeof(food_name));

    printf("Give the price of food (#1): ");
    scanf("%d", &food1.price);

    printf("Give the name of food (#2): ");
    scanf("%s", food_name);
    memset(food2.name, 0, strlen(food_name));
    strncat(food2.name, food_name, sizeof(food_name));

    printf("Give the price of food (#2): ");
    scanf("%d", &food2.price);

    swap(&food1, &food2);

    printf("#1: %s (%d)\n", food1.name, food1.price);
    printf("#2: %s (%d)", food2.name, food2.price);

    return 0;
}