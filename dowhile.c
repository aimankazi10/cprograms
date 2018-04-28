#include <stdio.h>

int main()
{
    int number;
    
    do
    {
       printf("Please enter a non-zero number OR press zero to exit : ");
       scanf("%d", &number);
       if(number % 2 == 0)
       {
           printf("You entered an even number.\n");
       }
       
    }
    while(number);
}