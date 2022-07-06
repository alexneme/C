/*

  Course Pack 2 - Conditions
  Exercise 7. Write a program to calculate the final bill for a guest at a fictitious hotel,
  whereas:

  The guest's name, the type of apartment used (A, B, C or D), the
  number of nights used by the guest and the value of the guest's consumption of products.

  The daily rate is determined by the following table:

  TYPE OF APARTMENT         DAILY RATE
  A                         $150
  B                         $100
  C                         $75
  D                         $50

  The total daily rate is calculated by multiplying the number of nights used
  at the daily rate.

  The subtotal is calculated by adding the total value of the daily rates and the value of consumption
  internal.

  The value of the service fee is equivalent to 10% of the subtotal.

  The total value is the sum of the subtotal plus the service fee.

  Write the final bill containing: the name of the guest, the type of apartment, the number
  of daily used, the unit value of the daily rate, the total value of the daily rates, the value of consumption
  internal, the subtotal, the service fee amount, and the total value.

*/

#include <stdio.h>

int main()
{
	char name[30];
	char ap;
	int d;
	float c, vd, subtotal, fee, total, vud;
	
	printf("Enter your name: ");
	scanf("%s", name);
	printf("Enter the number of nights: ");
	scanf("%d", &d);
	printf("Enter the type of apartment [A|B|C|D]: ");
	scanf(" %c", &ap);
	printf("Enter value of products consumption: $");
	scanf("%f", &c);
	
	switch(ap){
		case 'a':
		vd = d * 150;
		break;
		case 'b':
		vd = d * 100;
		break;
		case 'c':
		vd = d * 75;
		break;
		case 'd':
		vd = d * 50;
		break;
	}
	subtotal = vd + c;
	fee = subtotal * 0.10;
	total = subtotal + fee;
	vud = vd/d;
	
	printf("Name: %s\nType of apartment: %c\nNumber of daily used: %d\nDaily rate: $%.2f\nTotal value of the daily rates: $%.2f\nConsumption value: $%.2f\nSubtotal: $%.2f\nService fee: $%.2f\nTotal value: $%.2f", name, ap, d, vud, vd, c, subtotal, fee,total);  
    return 0;
}