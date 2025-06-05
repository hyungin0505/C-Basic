// 12.structure

// 과제 12
// 음식 이름과 가격을 멤버 변수로 가지는 구조체를 통해 사용자로부터 값을 입력받고 다시 출력하여라

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Food {
    char name[50];
    int price;
};

int main(void) {
    struct Food food;

    char food_name[50];

    printf("Give the name of food: ");
    scanf("%s", food_name);
    memset(food.name, 0, strlen(food_name));
    strncat(food.name, food_name, sizeof(food_name));


    printf("Give the price of food: ");
    scanf("%d", &food.price);

    printf("%s (%d)", food.name, food.price);

    return 0;
}