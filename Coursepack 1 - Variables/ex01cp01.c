/*

  Course Pack 1 - Variables
  Exercise 1. Write a program that receives 3 grades and their respective weights, calculates and displays the average
  weighted of these grades.

*/

#include <stdio.h>

int main()
{
    float g1, t1, g2, t2, g3, t3, avar;
    printf("Enter your grade: ");
    scanf("%f", &g1);
    printf("Enter their weight: ");
    scanf("%f", &t1);
    printf("Enter your grade: ");
    scanf("%f", &g2);
    printf("Enter their weight: ");
    scanf("%f", &t2);
    printf("Enter your grade: ");
    scanf("%f", &g3);
    printf("Enter their weight: ");
    scanf("%f", &t3);
    printf("\nWeighted average = %.2f\n", avar=((g1*t1) + (g2*t2) + (g3*t3)) / (t1+t2+t3));
  return 0;
}