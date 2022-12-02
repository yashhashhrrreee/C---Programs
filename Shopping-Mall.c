#include <stdio.h>
int main()
{
    int prc[5], sum=0, disc, amt;
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter the amount of your items\n");
        scanf("%d", &prc[i]);
        sum = sum + prc[i];
    }
    if(sum>=1000 && sum<3000){
        disc=sum*0.05;
        amt=sum-disc;
        printf("Your final amount is :%d", amt);
    }
    else if(sum>=3000 && sum<5000){
        disc=sum*0.1;
        amt=sum-disc;
        printf("Your final amount is :%d", amt);
    }
    else if(sum>=5000 && sum<7000){
        disc=sum*0.12;
        amt=sum-disc;
        printf("Your final amount is :%d", amt);
    }
    else if(sum>=7000){
        disc=sum*0.15;
        amt=sum-disc;
        printf("Your final amount is :%d", amt);
    }
    else if(sum>=10000){
        disc=(sum-1000)*0.1;
        amt=sum-disc;
        printf("Your final amount is :%d",amt);
    }
    else{
        printf("Sorry no discount is available");
    }
    
    return (0);
}