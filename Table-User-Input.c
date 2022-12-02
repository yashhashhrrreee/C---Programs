#include <stdio.h>
int main()
{
    int n, incnt;
    printf("Enter a number from 2 to 10\n");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%2d x %d = %3d\n", i, n, n * i);
    }
    return(0);
}