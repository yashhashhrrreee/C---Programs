#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int d,i,marks[5];
	char name[5];
	clrscr();
	do
	{
		printf("Enter Name of student:");
		scanf("%s",&name[i]);
		d=strcmp(&name[i],"END");
		if(d!=0)
		{
			for(i=0;i<5;i++)
			{
				printf("\nEnter makrs of subject %d: \n",i+1);
				scanf("%d",&marks[i]);
			}
		}
	}
	while(d!=0);
	getch();
}