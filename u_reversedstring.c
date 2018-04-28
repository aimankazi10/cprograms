#include <stdio.h>

int main()
{
    int n =0;
    int i;

    // to store the user entered string
    char a[100];
    char temp;

    printf("Please enter a string:");
    gets(a);
    //printf("The entered string is : %s",a);
    while(a[n] != '/0')
    {
        n++;
    }
    for( i = 1; i <=(n-1)/2; i++)
    {
        temp = a[n - i - 1];
        a[n - i - 1] = a[i];
        a[i] = temp;
    }

    printf("The reverse string is  : %s ", a);

    return 0;
}