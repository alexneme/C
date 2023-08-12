/*

  Course Pack 3 - Loopings
  Exercise 5. Write a program that reads an integer and positive value N, calculates and displays the series given by:

  S = 1 + (1/1!) + (1/2!) + (1/!3) + ... + (1/N!)

*/

#include <stdio.h>

int main()
{
  int i, j, num;
  float sum = 1, factorial = 1;

  printf("Enter an integer and positive number to Sum: ");
  scanf("%d", &num);
  for (i = 1; i < num; i++)
  {
    for (j = 1; j <= i; j++)
    {
      factorial = factorial * j;
    }
    sum = sum + 1 / factorial;
  }

  printf("S = %f\n", sum);

  printf("\n");
  return 0;
}