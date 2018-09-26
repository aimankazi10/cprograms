/* write a program using gets/puts function */

#include <stdio.h>
#include <conio.h>
void main()
{
    char str[100];
    printf("Enter a string : \n");
    gets(str);
    printf("Entered a string is : ");
    puts(str);
}