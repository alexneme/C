/*

  Course Pack 2 - Conditions
  Exercise 4. Write a program that determines the degree of obesity of a person, being
  the person's weight and height. The degree of obesity is determined by the mass index body (mass = weight / height2)
  through the table below:
  
  BODY MASS             OBESITY DEGREE
  < 26                  Normal
  >= 26 e < 30          Obese
  >= 30                 Morbidly Obese

*/

#include <stdio.h>

int main()
{
    float kg, m, bmi;

    printf("Enter your weight in kilograms: ");
    scanf("%f", &kg);
    printf("Enter your height in meters: ");
    scanf("%f", &m);

    bmi = kg/(m*m);
    if(bmi < 26){
        printf("BMI: %.1f Normal Weight", bmi);
    }
    else if (bmi<30){
        printf("BMI: %.1f Obese", bmi);
    }
    else{
        printf("BMI: %.1f Morbidly Obese", bmi);
    }
    return 0;
}