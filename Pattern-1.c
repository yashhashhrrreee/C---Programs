/*
Write program to print following pattern
2 2 1 2 2
1 1 2 1 1
2 2 1 2 2
1 1 2 1 1    
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==3)
			{
				printf("%2d",((i-1)%2)+1);
			}
			else
			{
				printf("%2d",(i%2)+1);
			}
		}
		printf("\n");
	}
	getch();
}