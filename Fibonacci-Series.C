#include<conio.h>
#include<stdio.h>
 void main()
  {
   int fibo,num=0,num1=1,i;
   clrscr();
   printf("Fibonacci Series:");
   printf("\n%d",num);
   printf("\t%d",num1);
   for(i=2;i<10;i++)
    {
     fibo=num+num1;
     printf("\t%d",fibo);
     num=num1;
     num1=fibo;
    }
   getch();
  }
