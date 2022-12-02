#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f;
	clrscr();
	printf("Enter the value of c and f:\n");
	scanf("%f %f",&c,&f);
	printf("CELCIUS TO FARENHEIT:-\n");
	f=9/5*c+32;
	printf("Value of f=%f\n\n");
	printf("FERENHEIT TO CELCIUS:-\n");
	c=5/9*(f-32);
	printf("Value of c=%f");
	getch();
}