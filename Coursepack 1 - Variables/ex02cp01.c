/*

  Course Pack 1 - Variables
  Exercise 2. Write a program that reads a positive integer and prints their twice.

*/

#include <stdio.h>

int main()
{
  int num;
  printf("Enter a positive integer number: ");
  scanf("%d", &num);
  printf("Their double: %d", num += num);
  printf("\n");
  return 0;
}