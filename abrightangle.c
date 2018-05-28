/*
 * Filename: abrightangle.c
 * Path: cprograms
 * Created Date: Monday, May 28th 2018, 2:18:02 pm
 * Author: Aiman Kazi
 * 
 * Copyright (c) 2018 Visual Labs Learning Solution
 */
#include <stdio.h>

int main()
{
    // var n will hold the input from the user
    int n;

    // Counter -- Outer For loop
    int i;
    
    // Counter -- Inner For loop
    int j;

    int m = 65;
    int k = 64;

    // Accepting 'n' from user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // outer for loop
    for(i = 1; i <= n; i++)
    {
        /* code */

        k = k + i; // 65

        m = k; // 65

        // Giving space
        for(j = 1; j <= n-i; j++)
        {
            /* code */
            printf(" ");
        }

        // To print Character
        
        for(j = 1; j <= i; j++)
        {
            /* code */
            printf("%c", m--); // m is decremented by 1 . Later when k is incremented the vale is given to m. next m = 66
        }

        printf("\n");

    }
    
}