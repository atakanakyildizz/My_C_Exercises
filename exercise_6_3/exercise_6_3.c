//
// Created by Atakan Akyıldız on 25.09.2024.
//

#include <stdio.h>

int main(void) {

    float number = 1;
    float sum = 0;
    int i = 0;

    printf("The program calculates the average of scores you enter."
           "\nEnd with a negative integer.\n");


    do {
        printf("Enter score (4-10): ");
        scanf("%f", &number);
        sum = sum + number;
        i++;
    }while(number>0);

    printf("You entered %d scores.\n", i-1 );
    printf("The average of scores you enter is %f.\n", sum-number);
    printf("The average is %.2f\n", (sum-number)/(i-1) );
}