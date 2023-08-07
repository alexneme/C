/*

  Course Pack 1 - Variables
  Exercise 5. Write a program to calculate the area of ​​a triangle, given its base and  your height.
  A = (b * h) / 2

*/

#include <stdio.h>

int main()
{
  float area, base, height;
  printf("Enter the base of a triangle: ");
  scanf("%f", &base);
  printf("Enter their height: ");
  scanf("%f", &height);
  printf("Area = %.2f", area = (base * height) / 2);
  printf("\n");
  return 0;
}