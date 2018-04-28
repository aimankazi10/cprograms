#include <stdio.h>

void main()
{
    
    int a[4]; // array of size four
    int i;
    // loop to accept numbers from users
    for(i = 0; i < 4; i++)
    {
        printf("enter the number \n");
        scanf("%d",&a[i]);
    }

    // loop to display numbers to the user
    for(i = 0; i < 4; i++)
    {
        printf("the valus at %d is %d.\n",i,a[i]);
    }
    
}