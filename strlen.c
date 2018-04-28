#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    int length;
    
    printf("Enter your name\n");
    
    gets(name);

    length = strlen(name);
    printf("Hello %s\n", name);
    
    printf("The length of your name is %d\n", length);
}    