#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(int a = 1; a <= rows; a++)
    {
        for(int j = 1; j <= a; j++)
        {
            printf("%d",a);
        }
        printf("\n");
    }

    return 0; 
}