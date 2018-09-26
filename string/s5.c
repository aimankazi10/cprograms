/* write a program to find the length of a string without built in function */

#include <stdio.h>
#include <conio.h>
void main()
{
    char name[20];
    int lenght = 0;
    int i = 0;
    printf("Enter your name:");
    scanf("%s", name);

    while (name[i] != '\0')
    {
        ++lenght;
        ++i;
    }
    printf("The lenght of %s is %d", name, i);
}