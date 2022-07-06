/*

  Course Pack 3 - Loopings
  Exercise 5. Write a program that reads an integer and positive value N, calculates and displays the series given by:

  S = 1 + (1/1!) + (1/2!) + (1/!3) + ... + (1/N!)
  
*/

#include <stdio.h>

int main()
{

  int i, n, c; 
  float sum=1, factorial;
  
  printf("Enter an integer and positive number to Sum: ");
  scanf("%d", &n);
  for(i=1; i<n; i++)
  {
    factorial=1;
    for(c=1; c<=i; c++)
    {
      factorial = factorial * c;
    }
    sum = sum+1 / factorial;
  }
  printf("S = %.2f\n", sum);
  return 0;
}