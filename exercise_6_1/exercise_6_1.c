//
// Created by Atakan Akyıldız on 25.09.2024.
//
#include <stdio.h>

int main() {

    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++) {
        printf("%d\n", i);
    }

}