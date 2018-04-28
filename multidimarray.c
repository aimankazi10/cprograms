#include<stdio.h>
//#include<conio.h>
void main()
{
    //int aa[3][4] = {{5,1,7,9},{2,3,7,4},{9,3,1,5}};
    int aa[3][4];
    printf("Enter the values for an array\n");
    for(int i=0; i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("Enter integer\n");
            scanf("%d\n",&aa[i][j]);
        }
       
    }

    printf("The values in an array are as follows: \n");
    for(int i=0; i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d\n",aa[i][j]);
        }
       
    }
}