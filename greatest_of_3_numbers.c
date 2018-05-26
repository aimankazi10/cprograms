#include <stdio.h>

int main()
{
    int n1, n2, n3;

    printf("Enter three numbers: ");
    scanf("%d%d%d",&n1, &n2, &n3);

    if(n1>n2)
    {
        if(n1 > n3)
        {
            printf("N1 is greatest \n");
        }
        else
        {
            printf("N3 is greatest \n");
        }
    }
    else if(n2>n3)
    {
         printf("N2 is greatest \n");
    }
    else
    {
        printf("N3 is greatest \n");
    }

    return 0;
}