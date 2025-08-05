#include <stdio.h>
void main()
{
  const int ticket=200;
  int age,people;
  int sum=0;
  int cnt=0;
  printf("Enter the total number of people:");
  scanf("%d",&people);
  for(int i=0;i<people;i++)
  {   int j=i+1;
      printf("\nEnter the age of customer %d ",j);
      scanf("%d",&age);
      if(age>0&&age<120)
      {
      if(age<12||age>59)
      {
          printf("\nYou are accessed free entry");
      }
      else
      {
          printf("\nYour entry fee = %d",ticket);
          sum+=ticket;
          cnt++;
      }
      }
      else
      {
         printf("Invalid age entered");
         i--;
      }
  }
      if(cnt>5)
      {
        sum=sum-(sum*0.1);
      }
      printf("\nTotal price of tickets=%d",sum);
}


