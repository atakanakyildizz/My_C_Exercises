#include <stdio.h>
//
// Created by Atakan Akyıldız on 25.09.2024.
//
int main() {

    int number;
    printf("Enter an integer: ");
    scanf("%d",&number);

    if(number % 2 == 0) {
        printf("Number %d is even.",number);
    }
    else if(number % 2 == 1) {
        printf("Number %d is odd.",number);
    }
    else {
        printf("There is a error");
    }
}