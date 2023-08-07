/*

  Course Pack 2 - Conditions
  Exercise 5. A certain club wants to increase the salary of its players. The readjustment must obey the following table:

  CURRENT SALARY ($)            	 RISE
  0.00 to 1,000.00               	 20%
  1,000.01 to 5,000.00           	 10%
  5,000.01 or above               	 0%

*/

#include <stdio.h>

int main()
{
	float salary, newsalary;

	printf("Enter your salary: $");
	scanf("%f", &salary);

	if (salary <= 1000)
	{
		printf("New salary: $%.2f", newsalary = salary * 1.20);
	}
	else if (salary <= 5000)
	{
		printf("New salary: $%.2f", newsalary = salary * 1.10);
	}
	else
	{
		printf("New salary: $%.2f", salary);
	}
	printf("\n");
	return 0;
}