/*

  Course Pack 2 - Conditions
  Exercise 1. Given 3 integer numbers, present these numbers in ascending order.

*/

#include <stdio.h>

int main()
{
  int num1, num2, num3;

  printf("Enter 3 numbers to order:\n");
  scanf("%d %d %d", &num1, &num2, &num3);

  if (num1 <= num2 && num2 <= num3)
  {
    printf("\nAscending order:\n%d\n%d\n%d\n", num1, num2, num3);
  }
  else if (num1 <= num3 && num3 <= num2)
  {
    printf("\nAscending order:\n%d\n%d\n%d\n", num1, num3, num2);
  }
  else if (num2 <= num1 && num1 <= num3)
  {
    printf("\nAscending order:\n%d\n%d\n%d\n", num2, num1, num3);
  }
  else if (num2 <= num3 && num3 <= num1)
  {
    printf("\nAscending order:\n%d\n%d\n%d\n", num2, num3, num1);
  }
  else if (num3 <= num1 && num1 <= num2)
  {
    printf("\nAscending order:\n%d\n%d\n%d\n", num3, num1, num2);
  }
  else
  {
    printf("\nAscending order:\n%d\n%d\n%d\n", num3, num2, num1);
  }

  printf("\n");
  return 0;
}