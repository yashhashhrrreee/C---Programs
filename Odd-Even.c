#include<stdio.h>

int main()
{
   int n;

   printf("Enter an integer\n");
   scanf("%d",&n);

   if ( n & 1 == 1 )
   {
      printf("Number is Odd\n");
   }

   else
   {
       printf("Number is Even\n");
   }

   return 0;
}
