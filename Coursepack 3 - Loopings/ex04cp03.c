/*

  Course Pack 3 - Loopings
  Exercise 4. A natural number is triangular if it is the product of three consecutive natural numbers.
  Write a program that given natural N, checks whether N is triangular. For example, 120 is
  triangular because 4 * 5 * 6 = 120.
  
*/

#include <stdio.h>

#include <stdio.h>

int main()
{
	int n, i=1;

	printf("Enter an integer number: ");
	scanf("%d", &n);
	
	while(i*(i+1)*(i+2) < n)
	{
		i++;
	}

	if(i*(i+1)*(i+2) == n)
	{
		printf("Triangular\n");
	}
	else
	{
		printf("Not triangular\n");
	}
	return 0;
}
