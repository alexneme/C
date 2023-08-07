/*

  Course Pack 3 - Loopings
  Exercise 9. Write a program that reads a integer number N, adds all the integers from 1 to N, and
  show the result obtained.

*/

#include <stdio.h>

int main()
{
	int n, sum = 0;
	printf("Enter a integer number N: ");
	scanf("%d", &n);
	for(int i=0; i<=n; i++)
	{
		sum+=i;
	}
	printf("%d\n", sum);
}