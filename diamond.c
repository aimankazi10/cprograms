#include <stdio.h>

int main()
{
    int n;
    int i;
    int j;
    int space = 1;

    printf("Enter the number of rows.\n");
    scanf("%d",&n);

    space = n -1;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= space; j++)
        {
            printf(" ");
        }

        space--;

        for(j = 1; j <= 2*i-1; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
}