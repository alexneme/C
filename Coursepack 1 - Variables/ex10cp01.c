/*

  Course Pack 1 - Variables
  Exercise 10. Suppose you have a list with the name and price of 3 products. The program should show the table with the name and price of the products to the user. The user must enter the quantity of each product he wants. In the end, the program should generate a table with the following columns: Product name, quantity of product, product unit value, product subtotal. Also, show the purchase total.

*/

#include <stdio.h>

int main()
{
  float awater, asnack, acoke, total;
  int water, snack, coke;

  printf("Pricing table:\nWater\t\t$1.09\nSnack\t\t$2.49\nCoke\t\t$1.99\n");
  printf("\nEnter the amount of products:\n");
  printf("Water: ");
  scanf("%d", &water);
  printf("Snack: ");
  scanf("%d", &snack);
  printf("Coke: ");
  scanf("%d", &coke);

  printf("\nWater\nUnit Price:\t\t$1.09\nAmount:\t\t\t%d un\nSubtotal:\t\t$%.2f\n\n", water, awater = 1.09 * water);
  printf("Snack\nUnit Price:\t\t$2.49\nAmount:\t\t\t%d un\nSubtotal:\t\t$%.2f\n\n", snack, asnack = 2.49 * snack);
  printf("Coke\nUnit Price:\t\t$1.99\nAmount:\t\t\t%d un\nSubtotal:\t\t$%.2f\n\n", coke, acoke = 1.99 * coke);
  printf("Purchase Total:\t\t$%.2f\n", total = awater + asnack + acoke);

  printf("\n");
  return 0;
}