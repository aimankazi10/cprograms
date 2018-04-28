#include <stdio.h>

int main()
{
    char string1[50];
    char string2[50];

    printf("Please enter the string of your choice:\n");
    gets(string1);

    printf("You entered: \t %s\n",string1);

    strcpy(string2,string1);

    printf("I copied your text. \t %s\n", string2);

}