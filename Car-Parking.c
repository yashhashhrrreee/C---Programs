#include<conio.h>
#include<stdio.h>
 void main()
  {
   int two(int );
   int four(int );
   int b,a,time,type,cost=0;
   printf("Enter the type of transport please !!!\n1: 2-Wheeler\n2: 4-wheeler\n");
   a=scanf("%d",&type);
   if(a!=1)
    {
     printf("\nEnter a valid input!\n");

    }
   if(type!=1 && type!=2)
    {
     printf("\nInvalid input\n");
    }
   printf("\nEnter the duration (in hours) for which you are going to park the car:\n");
   b=scanf("%d",&time);
   if(b!=1)
    {
     printf("\nEnter a valid number\n");

    }
   if(type==1)
    cost=two(time);
   else
    cost=four(time);
   printf("\nAmount to be paid:%d\n",cost);
   getch();
  }
 int two(int t)
  {
   int r=0;
   r=(((t/24)*10)+(((t%24)/5)*5)+(((t%24)%5)*2));
   return r;
  }
 int four(int f)
  {
   int s;
   s=(((f/24)*100)+(((f%24)/5)*20)+(((f%24)%5)*10));
   return s;
  }
