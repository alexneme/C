/*

  Course Pack 1 - Variables
  Exercise 5. Write a program to calculate the area of ​​a triangle, given its base and
  your height.  A = (b * h) / 2

*/

#include <stdio.h>

int main()
{
    float a, b, h;
    printf("Enter the base: ");
    scanf("%f", &b);
    printf("Enter the height: ");
    scanf("%f", &h);
    printf("Area = %.2f", a=(b*h)/2);    
  return 0;
}