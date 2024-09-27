//
// Created by Atakan Akyıldız on 25.09.2024.
//
#include <stdio.h>

int main() {

    float total_days;
    float days;
    float sum = 0;
    float array[total_days];

    printf("The program calculates the total hours worked during"
           "a specific period and the average length of a day.\n");
    printf("How many days: ");
    scanf("%f", &total_days);
     for (int i = 0; i < total_days ; i++) {
         printf("Enter the working hours for day %d ", i);
         scanf("%f",&days);
         array[i] = days;
         sum = sum + days;
     }
    printf("Total hours worked: %.1f\n", sum);
    printf("Average length of a day: %.1f\nHours entered: ", (sum)/(total_days));
    for(int i = 0; i < total_days; i++) {
        printf("%.1f ", array[i]);
    }

}
