/*

  Course Pack 2 - Conditions
  Exercise 6. Write a program that, given a student's three grades, determines and displays his average and its grading rate, knowing that:

  - The final average is calculated by the arithmetic mean of the 3 grades.

  - The grading is determined based on the following table:

  FINAL AVERAGE         GRADING RATE
  >= 8                  A
  >= 5 and < 8          B
  < 5                   C

*/

#include <stdio.h>

int main()
{
  float grade1, grade2, grade3, gradeAverage;

  printf("Enter first grade: ");
  scanf("%f", &grade1);
  printf("Enter second grade: ");
  scanf("%f", &grade2);
  printf("Enter third grade: ");
  scanf("%f", &grade3);

  gradeAverage = (grade1 + grade2 + grade3) / 3;
  printf("Your average: %.2f\n", gradeAverage);

  if (gradeAverage >= 8)
  {
    printf("Grading: A");
  }
  else if (gradeAverage >= 5)
  {
    printf("Grading: B");
  }
  else
  {
    printf("Grading: C");
  }

  printf("\n");
  return 0;
}