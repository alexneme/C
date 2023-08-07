/*

  Course Pack 1 - Variables
  Exercise 4. Write a program to read a given temperature in Fahrenheit and display the equivalent in Celsius.
  C = 5 / 9 * ( F - 32 )

*/

#include <stdio.h>

int main()
{
  float fahrenheit, celsius;
  printf("Enter temperature in Fahrenheit: ");
  scanf("%f", &fahrenheit);
  printf("Converted to Celsius = %.2f C", celsius = ((fahrenheit - 32) * 5 / 9));
  printf("\n");
  return 0;
}