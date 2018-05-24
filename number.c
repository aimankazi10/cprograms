/*
 * WAP to find greatest of three numbers
 * 
 * Filename: number.c
 * Path: cprograms
 * Created Date: Thursday, May 24th 2018, 3:39:33 pm
 * Author: Aiman Kazi
 * 
 * Copyright (c) 2018 Visual Labs Learning Solution
 */

#include <stdio.h>


int main()
{
    // define three variables
    int n1, n2, n3;

    // declare function checkGreatest
    void checkGreatest(int a, int b, int c);

    // Accept three values from user
    printf("Enter first number: ");
    scanf("%d", &n1);

    printf("Enter second number: ");
    scanf("%d", &n2);
    
    printf("Enter third number: ");
    scanf("%d", &n3);
    
    //call function checkGreatest and pass them values taken from user.

    checkGreatest(n1, n2, n3);

    return 0;
}

// define function checkGreatest
void checkGreatest(int a, int b, int c)
{
    if(a > b)
    {
        if(a > c)
        {
            printf("First is greatest.\n");
        }
        else
        {
            printf("Third is greatest.\n");
        }
    }
    else if(b > c)
    {
        printf("Second is greatest.\n");
    }
    else
    {
        printf("Third is greatest.\n");
    }
}