#include <stdio.h>

int main()
{
    int number;
    int d1;
    int d2;

    printf("Enter a number: \n");
    scanf("%d",&number);

    d1 = number % 10;

    number = number / 10 ;

    d2 = number % 10;

    printf("Reversed no is %d%d\n", d1,d2);

}