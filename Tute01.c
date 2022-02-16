/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() { 
  int sub_1, sub_2;
  float average;

  printf("Enter Marks for Subject 1 : ");
  scanf("%d", &sub_1);
  printf("Enter Marks for Subject 2 : ");
  scanf("%d", &sub_2);

  average = (sub_1 + sub_2)/2.0;
  printf("The average is %.2f", average);
  
  
  return 0;
}

