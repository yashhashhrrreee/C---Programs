
/*Write C program to print runs scored by all batsman of a team if team is all down,
 total runs scored by that team and run rate if match is of 20 overs.*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,total;
	float RR;
	printf("enter the runs scored by batsman 1:\n",b1);
	scanf("%d",&b1);
	printf("enter the runs scored by batsman 2:\n",b2);
	scanf("%d",&b2);
	printf("enter the runs scored by batsman 3:\n",b3);
	scanf("%d",&b3);
	printf("enter the runs scored by batsman 4:\n",b4);
	scanf("%d",&b4);
	printf("enter the runs scored by batsman 5:\n",b5);
	scanf("%d",&b5);
	printf("enter the runs scored by batsman 6:\n",b6);
	scanf("%d",&b6);
	printf("enter the runs scored by batsman 7:\n",b7);
	scanf("%d",&b7);
	printf("enter the runs scored by batsman 8:\n",b8);
	scanf("%d",&b8);
	printf("enter the runs scored by batsman 9:\n",b9);
	scanf("%d",&b9);
	printf("enter the runs scored by batsman 10:\n",b10);
	scanf("%d",&b10);
	total=b1+b2+b3+b4+b5+b6+b7+b8+b9+b10;
	printf("Scoreboard is: %d\n",total);
	RR=total/20;
	printf("RUN RATE: %f",RR);
	getch();
}