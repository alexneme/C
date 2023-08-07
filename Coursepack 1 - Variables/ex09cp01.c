/*

  Course Pack 1 - Variables
  Exercise 9. Write a program that, knowing the grades of test average (TA), coursework average (CA) and exercises average (EA) of a student, calculate his final average (FA) being:
  FA = 0.7 * TA + 0.2 * CA + 0.1 * EA

*/

#include <stdio.h>

int main()
{
  float ta, ca, ea, fa;
  printf("Enter test average grade: ");
  scanf("%f", &ta);
  printf("Enter coursework average grade: ");
  scanf("%f", &ca);
  printf("Enter exercises average grade: ");
  scanf("%f", &ea);
  printf("Final average = %.2f", fa = (ta * 0.7) + (ca * 0.2) + (ea * 0.1) / 3);
  printf("\n");
  return 0;
}