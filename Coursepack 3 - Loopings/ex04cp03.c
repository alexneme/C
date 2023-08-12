/*

  Course Pack 3 - Loopings
  Exercise 4. A natural number is triangular if it is the product of three consecutive natural numbers.
  Write a program that given natural N, checks whether N is triangular.
  For example, 120 istriangular because 4 * 5 * 6 = 120.

*/

#include <stdio.h>

int main()
{
  int i = 1, num;

  printf("Check if your number is triangular: ");
  scanf("%d", &num);

  while (i * (i + 1) * (i + 2) < num)
  {
    i++;
  }

  if (i * (i + 1) * (i + 2) == num)
  {
    printf("Triangular\n");
  }
  else
  {
    printf("Not triangular\n");
  }

  printf("\n");
  return 0;
}
