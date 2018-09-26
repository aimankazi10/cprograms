/* write a program using getchar function */

#include <stdio.h>

void main()
{
    int ch1, ch2;
    printf("Please type in two character together: \n ");
    ch1 = getc(stdin);
    ch2 = getchar();
    printf("First character is : %c \n", ch1);
    printf("Second character is : %c \n", ch2);
}
