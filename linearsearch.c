/* 
 * Filename: linearsearch.c
 * Path: /home/diamond/cprograms
 * Created Date: Tuesday, April 24th 2018, 7:48:53 pm
 * Author: Aiman Kazi
 * 
 * Copyright (c) 2018 Visual Labs
 */
#include <stdio.h>

int main()
{   // declare an array of size 10
    int array[10];

    // n for the number of elements user will give
    int n;

    // c is for the counter
    int c;

    // to search the element
    int search;

    // user will give the input
    printf("Enter the number of elements in an array\n");
    scanf("%d", &n);

    printf("Enter elements \n");

    for(c = 0; c < n; c++)
    {
        scanf("%d",&array[c]);
    }

    printf("Enter the number to search\n");
    scanf("%d",&search);

     for(c = 0; c < n; c++)
    {   // if element found it will go in the if statement
        if(array[c] == search)
        {
            printf("%d is present at %d\n", search, c+1);
            break; // throughs out of the loop
        }
    }
    
    if(c==n)
        printf("The search element isnt present.\n");

    printf("\n");
    
    return 0;
}