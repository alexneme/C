/*

  Course Pack 1 - Variables
  Exercise 6. Three lines were typed, where each line contains the name and grade of a student.
  Write a program that reads this information and builds a table where the first column is the name of student and the second column is their grade.

*/

#include <stdio.h>
#include <string.h>

int main()
{
  char student1[50], student2[50], student3[50];

  float gstudent1, gstudent2, gstudent3;
  printf("Enter your name and your grade: ");
  scanf("%s %f", student1, &gstudent1);
  printf("Enter your name and your grade: ");
  scanf("%s %f", student2, &gstudent2);
  printf("Enter your name and your grade: ");
  scanf("%s %f", student3, &gstudent3);

  printf("Name\t\t\t\tGrade\n");
  printf("%s\t\t\t\t%.1f\n", student1, gstudent1);
  printf("%s\t\t\t\t%.1f\n", student2, gstudent2);
  printf("%s\t\t\t\t%.1f\n", student3, gstudent3);

  printf("\n");
  return 0;
}