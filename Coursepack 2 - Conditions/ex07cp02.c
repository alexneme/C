/*

  Course Pack 2 - Conditions
  Exercise 7. Write a program to calculate the final bill for a guest at a fictitious hotel, whereas:

  The guest's name, the type of apartment used (A, B, C or D), the number of nights used by the guest and the value of the guest's consumption of products.

  The daily rate is determined by the following table:

  TYPE OF APARTMENT         DAILY RATE
  A                         $150
  B                         $100
  C                         $75
  D                         $50

  The total daily rate is calculated by multiplying the number of nights used at the daily rate.

  The subtotal is calculated by adding the total value of the daily rates and the value of consumption internal.

  The value of the service fee is equivalent to 10% of the subtotal.

  The total value is the sum of the subtotal plus the service fee.

  Write the final bill containing: the name of the guest, the type of apartment, the number of daily used, the unit value of the daily rate, the total value of the daily rates, the value of consumption internal, the subtotal, the service fee amount, and the total value.

*/

#include <stdio.h>

int main()
{
	char name[30], ap;
	int numdaily;
	float consump, dailyrate, subtotal, fee, total, dailyprice;

	printf("Enter your name: ");
	scanf("%s", name);
	printf("Enter the number of nights: ");
	scanf("%d", &numdaily);
	printf("Enter the type of apartment (Luxurious [A] Premium [B] Standard [C] Basic [D]: ");
	scanf(" %c", &ap);
	printf("Enter value of products consumption: $");
	scanf("%f", &consump);

	switch (ap)
	{
	case 'a':
		dailyrate = numdaily * 150;
		break;
	case 'b':
		dailyrate = numdaily * 100;
		break;
	case 'c':
		dailyrate = numdaily * 75;
		break;
	case 'd':
		dailyrate = numdaily * 50;
		break;
	}
	subtotal = dailyrate + consump;
	fee = subtotal * 0.10;
	total = subtotal + fee;
	dailyprice = dailyrate / numdaily;

	printf("Name: %s\nType of apartment: %c\nNumber of daily used: %d\nDaily price: $%.2f\nTotal daily rates: $%.2f\nConsumption value: $%.2f\nSubtotal: $%.2f\nService fee: $%.2f\nTotal value: $%.2f", name, ap, numdaily, dailyprice, dailyrate, consump, subtotal, fee, total);
	printf("\n");
	return 0;
}