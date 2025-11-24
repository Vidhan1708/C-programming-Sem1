#include <stdio.h>
void main()
{
  int marks;
  char grade;

  printf("Enter your marks:");
  scanf("%d",&marks);

  if(marks>=0 && marks<=100)
  {
    grade = (marks>=90) ? 'A' : (marks>=80) ? 'B' : (marks>=70) ? 'C' : (marks>=60) ? 'D' : 'F' ;
    printf("\nGrade = %c",grade);
  }
  else
  printf("Input in invalid");

}
