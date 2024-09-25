//
// Created by Atakan Akyıldız on 25.09.2024.
//
#include <stdio.h>

int main() {

    int number1;
    float number2;

    printf("Enter an integer: ");
    scanf("%d", &number1);

    printf("Enter a decimal number: ");
    scanf("%f", &number2);

    printf("The integer number is: %d\n", number1);
    printf("The decimal number is: %.2f\n", number2);

}