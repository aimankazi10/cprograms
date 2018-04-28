#include<stdio.h>

void main()
{
int n;
int i=0;

printf("Enter the value of n\n");
scanf("%d",&n);

    while(i<=n)
    {
        printf("i = %d \n",i);
        i = i + 2;
    }
}