/*

  Course Pack 2 - Conditions
  Exercise 4. Write a program that determines the degree of obesity of a person, being the person's weight and height. The degree of obesity is determined by the body mass index (bmi = weight / height * height) through the table below:

  BODY MASS INDEX       OBESITY DEGREE
  < 26                  Normal
  >= 26 e < 30          Obese
  >= 30                 Morbidly Obese

*/

#include <stdio.h>

int main()
{
    float weight, meters, bmi;

    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter your height in meters: ");
    scanf("%f", &meters);

    bmi = weight / (meters * meters);
    if (bmi < 26)
    {
        printf("Body Mass: %.1f\nNormal Weight", bmi);
    }
    else if (bmi < 30)
    {
        printf("Body Mass Index: %.1f\nObese", bmi);
    }
    else
    {
        printf("Body Mass Index: %.1f\nMorbidly Obese", bmi);
    }
    printf("\n");
    return 0;
}