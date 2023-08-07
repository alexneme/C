/*

  Course Pack 2 - Conditions
  Exercise 3. Calculate the electricity consumption bill of a consumer. For this, write a program that reads the consumerId, the price of kWh and the amount of kWh consumed. At the end, display the consumer code and the total amount payable.
  Total to pay = price * quantity
  Minimum total to pay = $11.20

*/

#include <stdio.h>

int main()
{
  int consumerId;
  float kWh, amount, total;

  printf("Enter consumer code number: ");
  scanf("%d", &consumerId);
  printf("Enter price of kWh in dolars: ");
  scanf("%f", &kWh);
  printf("Enter the consumption of kWh: ");
  scanf("%f", &amount);

  total = (kWh * amount);
  if (total >= 11.20)
  {
    printf("\nConsumer: %d\nTotal to pay: $%.2f", consumerId, total);
  }
  else
  {
    printf("\nConsumer: %d\nTotal to pay: $11,20", consumerId);
  }
  printf("\n");
  return 0;
}