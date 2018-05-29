/*
 * Filename: recursiveExponential.c
 * Path: cprograms
 * Created Date: Tuesday, May 29th 2018, 4:47:29 pm
 * Author: Aiman Kazi
 * 
 * Copyright (c) 2018 Visual Labs Learning Solution
 */


// y = x raise to n 

#include <stdio.h>

int main()
{
    int n; // user will give n;
    int x;
    int y;

    int exponential(int x, int n);
    
    // Accepting user input

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    y = exponential(x,n);

     printf("The value of x raise to n is %d \n",y);

}

int exponential(int x, int n)
{
    if(n==1)
    {
        return x;
    }
    else
    {
        return ( x * exponential(x,n-1) );
    }
}