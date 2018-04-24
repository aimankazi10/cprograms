#include <stdio.h>
#include <string.h>

int main()
{
    // Need array to store the user string
    char array[50];

    printf("Enter a string to reverse. \n");
    
    gets(array);
    strrev(array);

    printf("The reverse string is :  %s", array);

    return 0;
}