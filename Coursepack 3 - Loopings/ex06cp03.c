/*

  Course Pack 3 - Loopings
  Exercise 6. Write a program that reads a value x, calculates and displays the series below considering the 15
  first terms:

  S = 1 + (x^2/1) + (x^3/2) + (x^4/3) + (x^5/4) + ...
  
*/

#include <stdio.h>

int main()
{
  int i;
  float x, serie, expo;

  printf("X: ");
  scanf("%f", &x);
	
	serie = 1;
	expo = x*x;
	
	for(i=1; i<15; i++)
	{
		serie = serie + expo/i;
		expo = expo * x;
	}
	printf("S = %.2f\n", serie);
  return 0;
}