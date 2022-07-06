/*

  Course Pack 2 - Conditions
  Exercise 2. Write an algorithm that reads two integer numbers and displays the larger one.

*/

#include <stdio.h>

int main()
{
  int n1, n2;

  printf("Enter 2 integer numbers:\n");
  scanf("%d %d", &n1, &n2);

  if(n1>n2){
    printf("\nLarger number: %d\n", n1);
  }
  else if (n2>n1){
    printf("\nLarger number: %d\n", n2);
  }
  else{
    printf("\nError! Same number.\n");
  }
}