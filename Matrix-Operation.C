#include<stdio.h>
#include<conio.h>
int sum[3][3],sub[3][3],mul[3][3],i,j,a[3][3],b[3][3];
int subtract()
{
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sub[i][j] = a[i][j] - b[i][j];
			printf("%d\t", sub[i] [j]);
		}
		printf("\n");
	}
	return(0);
}
int summma()
{
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
			printf("%d\t", sum[i] [j]);
		}
		printf("\n");
	}
	return(0);
}
int multa()
{
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			mul[i][j] = a[i][j] * b[i][j];
			printf("%d\t", mul[i] [j]);
		}
		printf("\n");
	}
	return(0);
}
/*int calculation()
{
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
			sub[i][j] = a[i][j] - b[i][j];
			mul[i][j] = a[i][j] * b[i][j];
		}
		printf("\n");
	}
	return(0);
}
int result()
{
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)              3 -1  2  3 -1  2
		{
			printf("%d\t", sub[i] [j]);
			printf("%d\t", sum[i] [j]);
			printf("%d\t", mul[i] [j]);
		}
		printf("\n");
	}
	return(0);
}*/
void main()
{

	clrscr();
	/*printf("Enter the number of rows : ");
	scanf("%d", &r);
	printf("Enter the number of columns : ");
	scanf("%d", &c); */
	printf("\nEnter elements of 1st matrix:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Enter element a%d%d: ", i + 1, j + 1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter elements of 2nd matrix:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Enter element b%d%d: ", i + 1, j + 1);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nFIRST MATRIX:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nSECOND MATRIX:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("\nSUBSTRACT:\n");
	subtract();
	printf("\nADDITION:\n");
	summma();
	printf("\nMULTPLICATION:\n");
	multa();
	getch();
}

       /*	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("ADDITION\n");
			summma();
			sum[i][j] = a[i][j] + b[i][j];
			printf("\nSUBSTRACTION\n");
			subtract();
			sub[i][j] = a[i][j] - b[i][j];
			printf("\nMULTIPLICATION\n");
			multa();
			mul[i][j] = a[i][j] * b[i][j];

		}
		printf("\n");
	}*/
	/*calculation();
	result();
	getch();
} */

       /*
       printf("\nSUBSTRACTION:\n");
	for (i = 0; i < r; i++)//substraction
	{
		for (j = 0; j < c; j++)
		{
			sub[i][j] = a[i][j] - b[i][j];
			printf("%d\t", sub[i] [j]);
		}
		printf("\n");
	}
	printf("\nMULTIPLICATION:\n");
	for (i = 0; i < r; i++)//multiplication
	{
		for (j = 0; j < c; j++)
		{
			mul[i][j] = a[i][j] * b[i][j];
			printf("%d\t", mul[i] [j]);
		}
		printf("\n");
	}*/
