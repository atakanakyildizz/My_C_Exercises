#include <stdio.h>
//
// Created by Atakan Akyıldız on 25.09.2024.
//
int main() {

    int number1, number2;

    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    printf("%d + %d = %d\n",number1,number2,number1+number2);
    printf("%d - %d = %d\n",number1,number2,number1-number2);
    printf("%d * %d = %d\n",number1,number2,number1*number2);

}