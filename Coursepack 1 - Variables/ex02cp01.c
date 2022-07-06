/*

  Course Pack 1 - Variables
  Exercise 2. Write a program that reads a positive integer and prints twice the same number.

*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The double = %d", n+=n);
  return 0;
}