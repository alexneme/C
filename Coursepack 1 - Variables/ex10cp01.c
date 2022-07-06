/*

  Course Pack 1 - Variables
  Exercise 10. Suppose you have a list with the name and price of 3 products (no need to read this
  keyboard table). The program should show the table with the name and price of the products to
  the user. The user must enter the quantity of each product he wants. In the end, the
  program should generate a table with the following columns: Product name, quantity of
  product, product unit value, product subtotal. Also, show the purchase total.

*/

#include <stdio.h>

int main()
{
	float am1, am2, am3, total;
	int w, s, c;
	printf("Pricing table:\nWater\t\t$1.09\nSnack\t\t$2.49\nCoke\t\t$1.99\n");
	printf("\nEnter the amount of products:\n");		
	printf("Water: ");
	scanf("%d", &w);
	printf("Snack: ");
    scanf("%d", &s);
	printf("Coke: ");
    scanf("%d", &c);
	printf("\nWater\nUnit Price:\t\t$1.09\nAmount:\t\t\t%d un\nSubtotal:\t\t$%.2f\n\n", w, am1=1.09*w);
	printf("Snack\nUnit Price:\t\t$2.49\nAmount:\t\t\t%d un\nSubtotal:\t\t$%.2f\n\n", s, am2=2.49*s);
	printf("Coke\nUnit Price:\t\t$1.99\nAmount:\t\t\t%d un\nSubtotal:\t\t$%.2f\n\n", c, am3=1.99*c);
	printf("Purchase Total:\t\t$%.2f\n", total = am1 + am2 + am3);
	return 0;
}