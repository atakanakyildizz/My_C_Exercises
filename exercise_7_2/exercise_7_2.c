//
// Created by Atakan Akyıldız on 25.09.2024.
//
#include <stdio.h>

int sum(int a, int b) {
    return (a + b);
}

int difference(int a, int b) {
    return a - b;
}

int product(int a, int b) {
    return a * b;
}

int main() {
    int a, b;
    int choice =1;

    while (choice > 0) {
        printf("1: sum of two numbers\n2: difference of two numbers\n"
       "3: product of two numbers"
       "\n<0: terminate the program\n");
        printf("Select calculation: ");
        scanf("%d", &choice);
        if (choice < 0) {
            printf("Terminating the program... ");
            break;
        }
        printf("Enter the first number: ");
        scanf("%d", &a);
        printf("Enter the second number: ");
        scanf("%d", &b);
        switch (choice) {
            case 1:
                printf("%d + %d = %d\n\n,", a, b, sum(a, b));
            break;
            case 2:
                printf("%d - %d = %d\n\n", a, b, difference(a, b));
            break;
            case 3:
                printf("%d * %d = %d\n\n ", a, b, product(a, b));
            break;
        }
    }
}
