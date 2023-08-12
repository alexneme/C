/*

  Course Pack 1 - Variables
  Exercise 7. Write a program that reads two integers, calculates their product and displays the result.

*/

#include <stdio.h>

int main()
{
  int num1, num2, product;

  printf("Enter first integer number: ");
  scanf("%d", &num1);
  printf("Enter second integer number: ");
  scanf("%d", &num2);

  printf("Product = %d", product = num1 * num2);

  printf("\n");
  return 0;
}