#include <stdio.h>
//
// Created by Atakan Akyıldız on 25.09.2024.
//
int largest(int a, int b, int c) {
    int temp;

    if ((a > b)&&(a >c)) {
        temp = a;
    }
    else if ((b > a)&&(b >c)) {
        temp = b;
    }
    else {
        temp = c;
    }
return temp;}

int smallest(int a, int b, int c) {
    int temp;
    if ((a < b)&&(a < c)) {
        temp = a;
    }
    else if ((b < a)&&(b < c)) {
        temp = b;
    }
    else {
        temp = c;
    }
    return temp;
}

int main() {
    int a, b, c;
    printf("Enter the 1. number: ");
    scanf("%d", &a);
    printf("Enter the 2. number: ");
    scanf("%d", &b);
    printf("Enter the 3. number: ");
    scanf("%d", &c);
    printf("Among the numbers you entered,\n"
           "The largest was %d and the smallest was %d.", largest(a,b,c), smallest(a,b,c) );
}