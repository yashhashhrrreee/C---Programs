#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	float a,base,hgt,len,bre,tarea,sarea,rarea;
	clrscr();
	printf("Enter the value of side of square:",a);
	x=scanf("%f",&a);
	if(x==1)
	{
		sarea=a*a;
		printf("Area of Square is: %f\n",sarea);
	}
	else
	{
		printf("INPUT IS INVALID");
	}
	printf("\nEnter the value of base and height of triangle:",base,hgt);
	y=scanf("%f %f",&base,&hgt);
	if(y==2)
	{
		tarea=0.5*base*hgt;
		printf("Area of the Triangle is: %f\n",tarea);
	}
	else
	{
		printf("INPUT IS INVALID");
	}
	printf("\nEnter the value of len and bre of rectangle:",len,bre);
	z=scanf("%f %f",&len,&bre);
	if(z==2)
	{
		rarea=len*bre;
		printf("Area of Reactangle is: %f\n",rarea);
	}
	else
	{
		printf("INPUT IS INVALID");
	}
	getch();
}