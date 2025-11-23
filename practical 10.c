#include <stdio.h>
void main()
{
  int i,choice,sum=0;
 x:printf("\n Enter your order number : \n 1 for burger \n 2 for pizza \n 3 for pasta \n 4 for sandwich \n 5 for french fries :" );
  scanf("%d",&choice);
  printf("How many would you like:");
  scanf("%d",&i);
  switch (choice)
  {
  case 1:
  sum+=(150*i);
  printf("Burger:%d",i);
  break;
  case 2:
  sum+=(i*200) ;
  printf("Pizza:%d",i);
  break;
  case 3:
  sum+=(120*i);
  printf("Pasta:%d",i);
  break;
  case 4:
  sum+=(100*i);
  printf("Sandwich:%d",i);
  break;
  case 5:
  sum+=(80*i);
  printf("French Fries:%d",i);
  break;
  default :
  printf("\n Invalid input");
  break;
  }

  printf("\n Enter 0 if you are finished ordering:");
  int more;
  scanf("%d",&more);
  if(more!=0)
  goto x;
  fflush(stdin);
  printf("\n Your bill amount=%d",sum);


}
