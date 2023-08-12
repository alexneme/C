/*

  Course Pack 3 - Loopings
  Exercise 8. Write a program that generates the following series: 10, 20, 30, 40, ..., 990, 1000.

*/

#include <stdio.h>

int main()
{
  int i;

  for (i = 10; i <= 1000; i += 10)
  {
    printf("%d\n", i);
  }

  printf("\n");
  return 0;
}