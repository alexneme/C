/*

  Course Pack 3 - Loopings
  Exercise 1. Write a program that calculates the value of S, using the first 20 terms.

  S = x/1 + x/2 + x/3 + ... + x/20

*/

#include <stdio.h>

int main()
{
	int i;
	float x, s = 0;

	printf("Enter value of X: ");
	scanf("%f", &x);
	
	for (i = 1; i <= 20; i++)
	{
		s = s + x / i;
	}
	printf("S = %f", s);

	printf("\n");
	return 0;
}