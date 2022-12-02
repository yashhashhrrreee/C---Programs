#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    clrscr();
    for(i=2;i<=6;i++)
    {
	for(j=2;j<i;j++)
	{
	    printf("%d", j);
	}

	printf("1");

	for(j=i;j<6;j++)
	{
	    printf("%d", j);
	}

	printf("\n");
    }
    getch();
}