#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter no 1:");
    scanf("%d",&num1);
    printf("Enter no 2:");
    scanf("%d",&num2);

    if((num1 ^ num2) == 0)
        printf("Number is Equal\n");
    else
        printf("Number is Unequal\n");

    return 0;
}
