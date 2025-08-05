#include <stdio.h>
#include <math.h>
int main()
{
     float weight,height,bmi;
     printf("Enter weight in kg = ");
    scanf("%f",&weight);
    printf("Enter height in meters = ");
    scanf("%f",&height);
    if(weight>0&&height>0)
   {
    bmi=weight/pow(height,2);
    printf("Bmi=%.2f",bmi);
    if(bmi<18.5)
    {
        printf("\nYou are Underweight");
    }
    else if(bmi<24.9)
    {
        printf("\nYou are Health Weight");
    }
    else if (bmi<29.9)
    {
        printf(" \nYou are Overweight");
    }
    else if(bmi<39.9)
    {
        printf("\nYou are Obese");
    }
    else
    {
        printf("\nYou are Severe Obese");
    }
   }
   else
   {
    printf("Your input values are negative");
   }
    return 0;
}
