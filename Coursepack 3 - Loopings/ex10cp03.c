/*

  Course Pack 3 - Loopings
  Exercise 10. Write a program that reads a number N, calculates and displays the first N terms of the
  Fibonacci sequence (0, 1, 1, 2, 3, 5, 8, 13, ...).
  The value read for N must be greater than or equal to the number 2.

*/

#include <stdio.h>

int main()
{
  int N;

  printf("Enter the value of N: ");
  scanf("%d", &N);

  if (N < 2)
  {
    printf("N must be greather than or equal to 2\n");
    return 1;
  }

  int i, fib[N];
  fib[0] = 0;
  fib[1] = 1;

  printf("The first %d terms of the Fibonacci sequence are:\n", N);
  printf("%d\n%d\n", fib[0], fib[1]);

  for (i = 2; i < N; i++)
  {
    fib[i] = fib[i - 1] + fib[i - 2];
    printf("%d\n", fib[i]);
  }

  printf("\n");
  return 0;
}