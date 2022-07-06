/*

  Course Pack 2 - Conditions
  Exercise 3. We want to calculate the electricity consumption bill of a consumer. For this,
  write a program that reads the consumer code, the price of kwh and the quantity of kwh
  consumed. At the end, display the consumer code and the total amount payable.
  Total to pay = price x quantity
  Minimum total to pay = $11.20

*/

#include <stdio.h>

int main()
{
    int c;
    float kwh, amt, total;

    printf("Enter consumer code number: ");
    scanf("%d", &c);
    printf("Enter the price of kWh: ");
    scanf("%f", &kwh);
    printf("Enter the consumption of kWh: ");
    scanf("%f", &amt);

    total = (kwh * amt);
    if (total >= 11.20){
        printf("\nConsumer: %d\nTotal to pay: $%.2f", c, total);
    }
    else{
    printf("\nConsumer: %d\nTotal to pay: $11,20", c);
    }
    return 0;
}