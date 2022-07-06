/*

  Course Pack 1 - Variables
  Exercise 7. Write a program that reads two integers, calculates their product and displays the
  result.

*/

#include <stdio.h>

int main(){
    int n1, n2, p;
    printf("Enter first integer number: ");
    scanf("%d", &n1);
    printf("Enter second integer number: ");
    scanf("%d", &n2);
    printf("Product = %d", p=n1*n2);
	return 0;
}