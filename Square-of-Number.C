#include<stdio.h>
#include<conio.h>
void main()
{
	int i,num,x;
	clrscr();
	printf("Enter Number:");
	x=scanf("%d",&num);
	if(x==1)
	{
		for(i=1 ;i<=num ;i++)
		{
			if(i*i<200)
			{
				printf("Number=%d\t Square=%d",i,i*i);
				printf("\n");
			}
		}
		printf("\nNumber's Square > 200");
	}
	else
	{
		printf("INVALID INPUT");
	}
	getch();
}
