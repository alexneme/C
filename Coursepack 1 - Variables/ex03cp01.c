/*

  Course Pack 1 - Variables
  Exercise 3. Write a program to calculate and display the perimeter of a circle, where  given the value of its radius.
  P = 2 * Pi * r.

*/

#include <stdio.h>

int main()
{
  float perimeter, radius, Pi = 3.14;

  printf("Enter the radius of the circle in centimeter: ");
  scanf("%f", &radius);

  printf("Perimeter = %.2f cm", perimeter = 2 * Pi * radius);
  
  printf("\n");
  return 0;
} 