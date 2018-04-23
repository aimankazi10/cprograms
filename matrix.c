/* WAP to read and display matrix element
 *
 * Filename: matrix.c
 * Path: /home/diamond/cprograms
 * Created Date: Monday, April 23rd 2018, 7:14:05 pm
 * Author: Aiman Kazi
 * 
 * Copyright (c) 2018 Visual Labs
 * 
 */

#include <stdio.h>

int main()
{
    int array[3][3];

    printf("Accepting numbers from user.\n");
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter a number: \n");
            scanf("%d", &array[i][j]);
        }
    }

    printf("Displaying numbers given by user.\n");
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \n",array[i][j]);
        }
    }

    printf("Program Ends");

    return 0;
}