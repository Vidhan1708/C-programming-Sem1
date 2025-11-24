#include<stdio.h>
#include<conio.h>
void main()
{
	int c,r,n,s;

	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			if(c%2==0)
			{
				printf("0");
			}
			else
				printf("1");
		}
		printf("\n");
	}
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=n*2-1;c++)
		{
			if(c==r || c==(2*n-r))
			{
				printf("%d",c);
			}
			else if(r==1)
			{
				printf("%d",c);
			}
			else
			{
				printf(" ");
			}
		 }
		 printf("\n");
	}

	for(r=n;r>=1;r--)
	{
		for(s=0;s<n-r;s++)
		{
			printf(" ");
		}
		for(c=r;c>=1;c--)
		{
			printf("%d",c);
		}
		for(c=2;c<=r;c++)
		{
			printf("%d",c);
		}
		printf("\n");
	}
	for(r=2;r<=n;r++)
	{
		for(s=0;s<n-r;s++)
			printf(" ");
		for(c=r;c>=1;c--)
			printf("%d",c);
		for(c=2;c<=r;c++)
			printf("%d",c);
		printf("\n");
	}

	int p,x,y,p2;
	n=7;

	p=(n/2)+1;

	for(r=1;r<=p;r++)
	{
		for(c=1;c<=(p-r);c++)
		{
			printf(" ");
		}
		x=65;
		for(c=p-r+1;c<=p;c++)
		{
			printf("%c",x);
			x++;
		}
		y=64+r-1;
		for(c=1;c<=r-1;c++)
		{
			printf("%c",y);
			y--;
		}
		printf("\n");
	}

	p2=n/2;
	for(r=1;r<=p2;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf(" ");
		}
		x=65;
		for(c=r+1;c<=p;c++)
		{
			printf("%c",x);
			x++;
		}
		y=64+p2-r;
		for(c=1;c<=p2-r;c++)
		{
			printf("%c",y);
			y--;
		}
		printf("\n");



}
}
