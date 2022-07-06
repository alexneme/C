/*

  Course Pack 3 - Loopings
  Exercise 1. write a program that calculates the value of S, using the first 20 terms.

  S = x/1 + x/2 + x/3 + ... + x/20

*/

#include <stdio.h>

int main()
{
	float x, s;
	printf("Enter value of X: ");
	scanf("%f", &x);
	for(int i=0; i<20; i++)
    {
		s = s+(x/i);
	}
	printf("S = %.2f", s);
    return 0;
}
