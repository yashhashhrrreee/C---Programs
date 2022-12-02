#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float P,R,T;
	long float SI,CI;
	clrscr();
	printf("Enter the Principal Amt:");
	scanf("%f",&P);
	printf("Enter the Rate of Interest:");
	scanf("%f",&R);
	printf("Enter the time periods:");
	scanf("%f",&T);
	SI=(P*R*T)/100;
	printf("\nSIMPLE INTEREST:%lf\n",(long float)SI);
	CI=P*(pow((1+(R/100)),T));
	printf("COMPOUND INTEREST:%lf\n",(long float)CI);
	printf("\nTotal Amount To Be Paid From Simple Interest:%f\n",P+SI);
	printf("Total Amount To Be Paid From Compound Interest:%f\n",P+CI);
	getch();
}



