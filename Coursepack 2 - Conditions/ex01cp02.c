/*

  Course Pack 2 - Conditions
  Exercise 1. Given 3 integer numbers, present these numbers in ascending order.

*/

#include <stdio.h>

int main()
{
  int n1, n2, n3;

  printf("Enter 3 numbers to order:\n");
  scanf("%d %d %d", &n1, &n2, &n3);

  if (n1 <= n2 && n2 <= n3){
      printf("\nAscending order:\n%d\n%d\n%d\n", n1, n2, n3);
    }
  else if (n1 <= n3 && n3 <= n2){
      printf("\nAscending order:\n%d\n%d\n%d\n", n1, n3, n2);
    }
  else if (n2 <= n1 && n1 <= n3){
      printf("\nAscending order:\n%d\n%d\n%d\n", n2, n1, n3);
    }
  else if (n2 <= n3 && n3 <= n1){
      printf("\nAscending order:\n%d\n%d\n%d\n", n2, n3, n1);
    }
  else if (n3 <= n1 && n1 <= n2){
      printf("\nAscending order:\n%d\n%d\n%d\n", n3, n1, n2);
    }
  else{
      printf("\nAscending order:\n%d\n%d\n%d\n", n3, n2, n1);
    }
  return 0;
}