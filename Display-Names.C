#include<stdio.h>
#include<conio.h>
void main()
{
	struct names
	{
		char name[50];
	} arr[5];
	int i;
	clrscr();
	for(i = 0; i < 5; i++)
	{
		printf("Enter name of Person %d\n", i + 1);
		gets(arr[i].name);
	}
	printf("Names of the people are :\n");
	for(i = 0; i < 5; i++)
	{
		printf("%s\n", arr[i].name);
	}
	getch();
}