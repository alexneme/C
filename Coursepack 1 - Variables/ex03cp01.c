/*

  Course Pack 1 - Variables
  Exercise 3. Write a program to calculate and display the diameter of a circle, where
  given the value of its radius.  d = 2 * Pi * r.

*/

#include <stdio.h>

int main()
{
    float d, r, Pi=3.14;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    printf("Diameter = %.2f", d=2*Pi*r);
  return 0;
}