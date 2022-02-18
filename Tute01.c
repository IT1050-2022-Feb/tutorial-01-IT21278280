/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int m1,m2,sum=0;
  float avg;
  
  printf("Enter subject 1 mark:");
  scanf("%d",&m1);

  printf("Enter subject 2 mark:");
  scanf("%d",&m2);

  sum = m1 + m2;
  avg = (float)sum/2 ;

  printf("Average = %.2f",avg);
  
  return 0;
}

