/* write a program using getc function */

#include <stdio.h>

void main()
{
    int ch;
    printf("Enter a character: ");
    ch = getc(stdin);
    printf("The character you just eneterd is : %c \n", ch);
    printf("%d\n", ch);
}
