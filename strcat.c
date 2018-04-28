#include <stdio.h>
#include <string.h>
int main()
{
    char string1[50];
    char string2[50];

    printf("Enter your first line: ");
    gets(string1);

    printf("Enter your second line: ");
    gets(string2);

    strcat(string1,string2);

    printf("\nYour full sentence is : %s\n", string1);
    
}