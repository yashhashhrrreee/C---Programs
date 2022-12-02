#include<stdio.h>
#include<conio.h>
void main()
{
	float total=0,price,damt;
	clrscr();
	//first item
	printf("enter the price of item 1:");
	scanf("%f", &price);
	damt=price-(price*0.02);
	total=total+damt;
	printf("the discounted amt is %f,\n", damt);
	//second item
	printf("enter the price of item 2:");
	scanf("%f", &price);
	damt=price-(price*0.03);
	total=total+damt;
	printf("the discounted amt is %f,\n", damt);
	//third item
	printf("enter the price of item 3:");
	scanf("%f", &price);
	damt=price-(price*0.05);
	total=total+damt;
	printf("the discounted amt is %f,\n", damt);
	//fourth item
	printf("enter the price of item 4:");
	scanf("%f", &price);
	damt=price-(price*0.07);
	total=total+damt;
	printf("the discounted amt is %f,\n", damt);
	//fifth item
	printf("enter the price of item 5:");
	scanf("%f", &price);
	damt=price-(price*0.1);
	total=total+damt;
	printf("the discounted amt is %f,\n", damt);
	printf("the total amt after discount is %f,\n", total);
	getch();
}

