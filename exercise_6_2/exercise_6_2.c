//
// Created by Atakan Akyıldız on 25.09.2024.
//
#include <stdio.h>

int main(){

  int number;
  int sum =1;

  printf("Enter an integer: ");
  scanf("%d", &number);

  for (int i = 1; i <= number; i++) {
      sum = i * sum;
  }

  printf("The factorial of %d is %d", number, sum);
}