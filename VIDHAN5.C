#include<stdio.h>
#include<conio.h>

void main()
{
   long int p=1441981744;
   float pw=48.4;
   float lro=85.95;
   float lrw=62.84;
   float lrm=80.95;
   long w=(pw/100)*p;
   long lw=(lrw/100)*w;
   long ilw=w-lw;
   long m=p-w;
   long lm=(lrm/100)*m;
   long ilm=m-lm;
   printf("The number of illilerate men=%ld ",ilm);
   printf("The number of illiterate women=%ld ",ilw);
   clrscr();
   getch();
}