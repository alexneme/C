/*

  Course Pack 2 - Conditions
  Exercise 6. Write a program that, given a student's three grades, determines and displays his average
  and its concept, knowing that:

  - The final average is calculated by the arithmetic mean of the 3 grades.

  - The grading is determined based on the following table:

  FINAL AVERAGE         GRADING
  >= 8                  A
  >= 5 and < 8          B
  < 5                   C

*/

#include <stdio.h>

int main()
{
	float g1, g2, g3, gA;
	
	printf("Enter first grade: ");
	scanf("%f", &g1);
	printf("Enter second grade: ");
	scanf("%f", &g2);
	printf("Enter third grade: ");
	scanf("%f", &g3);
	
	gA = (g1+g2+g3)/3;
	printf("Your average: %.2f\n", gA);
	
	if(gA>=8){
		printf("Grading A");
	}
	else if(gA>=5){
		printf("Grading B");
	}
	else{
		printf("Grading C");
	}
    return 0;
}