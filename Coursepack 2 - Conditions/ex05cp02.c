/*

  Course Pack 2 - Conditions
  Exercise 5. A certain club wants to increase the salary of its players. The readjustment must
  obey the following table:
  
  CURRENT SALARY ($)            	 RISE
  0.00 a 1,000.00               	 20%
  1,000.01 a 5,000.00           	 10%
  5,000 or above               	     0%

*/

#include <stdio.h>

int main()
{
	float sal, ns;
		
	printf("Enter your salary: $");
	scanf("%f", &sal);

	if(sal<=1000){
		printf("New salary: $%.2f", ns=sal*1.20);
	}
	else if(sal<=5000){
		printf("New salary: $%.2f", ns=sal*1.10);
	}
	else{
		printf("New salary: $%.2f", sal);	
	}
    return 0;
}