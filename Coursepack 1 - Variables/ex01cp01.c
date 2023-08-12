/*

  Course Pack 1 - Variables
  Exercise 1. Write a program that receives 3 grades and their respective weights. Calculate and displays their average.

*/

#include <stdio.h>

int main()
{
  float grade1, wgrade1, grade2, wgrade2, grade3, wgrade3, average;

  printf("Enter your first grade: ");
  scanf("%f", &grade1);
  printf("Enter their weight: ");
  scanf("%f", &wgrade1);
  printf("Enter your seccond grade: ");
  scanf("%f", &grade2);
  printf("Enter their weight: ");
  scanf("%f", &wgrade2);
  printf("Enter your third grade: ");
  scanf("%f", &grade3);
  printf("Enter their weight: ");
  scanf("%f", &wgrade3);

  printf("\nWeighted average = %.2f", average = ((grade1 * wgrade1) + (grade2 * wgrade2) + (grade3 * wgrade3)) / (wgrade1 + wgrade2 + wgrade3));
  
  printf("\n");
  return 0;
}