/*

  Course Pack 1 - Variables
  Exercise 6. Three lines were typed, where each line contains the name and grade of a
  student. Write a program that reads this information and builds a table where the first
  column is the name and the second column is the grade.

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char name1[50];char name2[50];char name3[50];
    float g1, g2, g3;
    printf("Enter your name and your grade: ");
    scanf("%s %f", name1, &g1);
    printf("Enter your name and your grade: ");
    scanf("%s %f", name2, &g2);
    printf("Enter your name and your grade: ");
    scanf("%s %f", name3, &g3);
    printf("Name\t\t\t\tGrade\n");
    printf("%s\t\t\t\t%.1f\n", name1, g1);
    printf("%s\t\t\t\t%.1f\n", name2, g2);
    printf("%s\t\t\t\t%.1f\n", name3, g3);
  return 0;
}