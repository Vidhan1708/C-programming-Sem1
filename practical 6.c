#include <stdio.h>
void main()
{
  float temp1,temp2;
  int a;
  printf("Enter 0 to convert celsius to fahrenheit:\n");
  printf("Enter 1 to convert fahrenheit to celsius:\n");
  printf("Enter 2 to convert kelvin to celsius:\n");
  printf("Enter 3 to convert kelvin to fahrenheit:\n");
  printf("Enter 4 to convert fahrenheit to kelvin:\n");
  printf("Enter 5 to convert celsius to kelvin:\n");
  scanf("%d",&a);
  if(a==0)
{  printf("Enter the temperature in celsius for conversion:");
   scanf("%f",&temp1);
   temp2=(temp1*9/5)+32;
   printf("The temperature in fahrenheit is %f",temp2);
  }
  else if(a==1)
  {
  printf("Enter the temperature in fahrenheit for conversion:");
  scanf("%f",&temp1);
  temp2=(temp1-32)/1.8;
  printf("The temperature in celsius is %f",temp2);
  }
  else if(a==2)
  {
     printf("Enter the temperature in kelvin for conversion:");
     scanf("%f",&temp1);
     temp2=temp1-273.15;
     printf("The temperature in celsius%f",temp2);
  }
  else if(a==3)
  {
      printf("Enter the temperature in kelvin for conversion:");
      scanf("%f",&temp1);
      temp2=((temp1+273.15)*9/5)+32;
      printf("The temperature in fahrenheit is%f",temp2);
  }
  else if(a==4)
  {
      printf("Enter the temperature in fahrenheit for conversion:");
      scanf("%f",&temp1);
      temp2=((temp1-32)/1.8)+273.15;
      printf("The temperature in kelvin is%f",temp2);
  }
  else if(a==5)
  {
       printf("Enter the temperature in celsius for conversion:");
       scanf("%f",&temp1);
       temp2=temp1+273.15;
       printf("The temperature in kelvin is%f",temp2);
  }
  else
  {
      printf("Invalid input entered");
  }

}
