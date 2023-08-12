/*

  Course Pack 2 - Conditions
  Exercise 2. Write an algorithm that reads two integer numbers and displays the larger one.

*/

#include <stdio.h>

int main()
{
  int num1, num2;

  printf("Enter 2 integer numbers:\n");
  scanf("%d %d", &num1, &num2);

  if (num1 > num2)
  {
    printf("\nLarger number: %d\n", num1);
  }
  else if (num2 > num1)
  {
    printf("\nLarger number: %d\n", num2);
  }
  else
  {
    printf("\nError! Same number.\n");
  }

  printf("\n");
  return 0;
}