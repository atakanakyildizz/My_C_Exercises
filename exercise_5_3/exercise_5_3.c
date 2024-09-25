//
// Created by Atakan Akyıldız on 25.09.2024.
//
#include <stdio.h>


int main(void){
    int choice, first_number, second_number;
    printf("1: subtraction\n2: addition\n3: multiplication\nSelect function:");
    scanf("%d",&choice);

    printf("Enter the first number: ");
    scanf("%d",&first_number);

    printf("Enter the second number: ");
    scanf("%d",&second_number);

    if (choice==1) {
        printf("%d - %d = %d \n", first_number, second_number, first_number-second_number );
    }
    else if (choice==2) {
        printf("%d + %d = %d \n", first_number, second_number, first_number+second_number );
    }
    else if (choice==3) {
        printf("%d * %d = %d \n", first_number, second_number, first_number*second_number );
    }


}