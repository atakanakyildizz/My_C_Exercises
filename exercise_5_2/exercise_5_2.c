#include <stdio.h>
//
// Created by Atakan Akyıldız on 25.09.2024.
//
int main() {
    char choose;
    int cup_number;
    printf("Do you drink coffee or tea (c/t)?");
    scanf("%c", &choose);
    printf("How many cups do you drink daily: ");
    scanf("%d", &cup_number);


    if (choose=='c') {
        if ((0 < cup_number) && (cup_number < 2)) {
            printf("You don't drink a lot of coffee, do you?");
        }
        else if ((3 < cup_number) && (cup_number < 20)) {
            printf("You drink a lot of coffee!");
        }
        else {
            printf("An error occurred in the program!");
        }
    }

    else if (choose=='t') {
        if ((0 < cup_number) && (cup_number < 2)) {
            printf("You do not drink a lot of tea");
        }
        else if ((3 < cup_number) && (cup_number < 20)) {
            printf("You drink a lot of tea!");
        }
        else {
            printf("An error occurred in the program!");
        }
    }
    else {
        printf("An error occurred in the program!");
    }
}