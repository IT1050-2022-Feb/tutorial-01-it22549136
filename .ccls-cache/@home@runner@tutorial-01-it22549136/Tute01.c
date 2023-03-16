/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int num1, num2, sum, avg;
  printf("enter number 1 : ");
  scanf("%d", &num1);
  printf("enter number 2 : ");
  scanf("%d", &num2);

  sum = num1 + num2;
  avg = sum / 2;

  printf("average : %d", avg);
  return 0;
}

