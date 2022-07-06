/*

  Course Pack 1 - Variables
  Exercise 4. Write a program to read a given temperature on the Fahrenheit scale and display the
  equivalent in Celsius.  C = 5 / 9 * ( F - 32 )

*/

#include <stdio.h>

int main()
{
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    printf("Converted to Celsius = %.2f *C", c=((f-32)*5/9));
  return 0;
}