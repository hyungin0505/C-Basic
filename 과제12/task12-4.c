// 12.structure

// 과제 12

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Menu {
    char name[50];
    int price;
} Menu;

void printMenu(int num, Menu *menu) {
    printf("#%d: %s (%d)\n", num, menu->name, menu->price);
}

int main(void) {
    int num;
    int total = 0;

    printf("How many foods do you have: ");
    scanf("%d", &num);

    Menu *menu = (Menu *)malloc(sizeof(Menu));

    for (int i=0; i<num; i++) {
        printf("Give the name of food (#%d): ", i+1);
        scanf("%s", menu[i].name);
        printf("Give the price of food (#%d): ", i+1);
        scanf("%d", &menu[i].price);
    }

    printf("<Menu>\n");

    for (int j=0; j<num; j++) {
        printMenu(j+1, &menu[j]);
        total += menu[j].price;
    }
    printf("Total: %d", total);

    return 0;
}