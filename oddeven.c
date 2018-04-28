#include <stdio.h>

void main()
{

    int a, rem; // two variable declaration
    printf("enter a number");
    scanf("%d",&a); // taking the value from user and storing in variable a

    // modulo operator gives remainder
    rem = a % 2;

    // evaluates to true if rem has value of zero
    if(rem == 0)
    {
        printf("you entered even number\n");
    }
    else
    {
        printf("you entered odd number\n");
    }
}