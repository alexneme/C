/*

  Course Pack 3 - Loopings
  Exercise 3. Write an algorithm that sums all the odd numbers that are found in the set of numbers from 1 to 500.

*/

#include <stdio.h>

int main()
{
  int i, sum = 0;

  for (i = 0; i < 501; i++)
  {
    if (i % 2 != 0)
    {
      sum = sum + i;
    }
  }

  printf("%d ", sum);
  printf("\n");

  return 0;
}