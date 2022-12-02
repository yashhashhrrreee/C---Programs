#include<stdio.h>
#include<conio.h>
void main()
{
	int i, num,incnt;
	unsigned long int fact=1;
	clrscr();
	printf("Enter a number:");
	incnt=scanf("%d",&num);
	if(incnt==1)
	{
		if(num>0)
		{
			for(i=1;i<=num;i++)
			{
				fact=fact*i;
			}
			printf("FACTORIAL of %d is: %lld", num,fact);
		}
		else
		{
			printf("ENTER POSITIVE NUMBER");
		}
	}
	else
	{
		printf("INVALID INPUT");
	}
	getch();
}