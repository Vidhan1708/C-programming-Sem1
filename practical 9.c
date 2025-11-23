#include <stdio.h>
#include <conio.h>
void main()
{
  float amt,dis;
  char c;
x : printf("Enter the amount:");
  scanf("%f",&amt);
  if(amt>0 && amt<1000)
  {
    dis=0.0;
  }
  else if(amt>0 && amt<=5000)
  {
    dis=0.1;
  }
 else if(amt>5000)
  {
   dis=0.2;
  }
  else
  {
    printf("Invalid input");
  }
  amt=amt-(amt*dis);
  amt=amt+(amt*.05);
  printf("\nAre you a registered member,Enter 1 if Yes or 0 if No:");
  int i;
  scanf("%d",&i);
  if(i==1)
  {
  printf("You are a registered member");
    amt=amt-(amt*0.05);
  }
  else if(i==0)
  {
    printf("You are not a registered member");
  }
  printf("\nTotal amount=%f",amt);
  printf("\nTotal discount applied=%f",amt*dis);
  printf("\nEnter y if another customer's amount is to be calculated: ");
  fflush(stdin);
  scanf("%c",&c);

  if(c=='y')
  {
   goto x;
  }
  else
  {
    printf("\nThank you for using our service");
  }
   getch();
}
