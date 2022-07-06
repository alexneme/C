/*

  Course Pack 3 - Loopings
  Exercise 10. Write a program that reads a number N, calculates and displays the first N terms of the
  Fibonacci sequence (0, 1, 1, 2, 3, 5, 8, 13, ...).
  The value read for N must be greater than or equal to the  number 2.

*/

#include <stdio.h>

int main()
{
    int n=0, i, fibo1=1, fibo2=1, fibo3;

	while (n<2)
	{
		printf("Enter higher number than 2: ");
		scanf("%d", &n);
	}
    printf("0\n1\n1\n");

	for(i=1; i<=n; i++)
    {
        fibo3 = fibo1 + fibo2;

        printf("%d\n", fibo3);

        fibo1 = fibo2;
	    fibo2 = fibo3;
               
		fibo3 = 0;

    }
    return 0;
}