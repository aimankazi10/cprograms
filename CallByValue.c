/*
 * Filename: CallByValue.c
 * Path: cprograms
 * Created Date: Saturday, May 26th 2018, 5:08:57 pm
 * Author: Aiman Kazi
 * 
 * Copyright (c) 2018 Your Company
 */

#include <stdio.h>

void main()
{
    // defining two variables n1 and n2
    int n1, n2;

    // function declaration "swap"
    void swap(int n1, int n2);

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    printf("The value of n1 and n2 in the main function before calling swap function are %d and %d \n\n", n1, n2);

    /* funnction call 
       passing the value of n1 and n2 as arguments
    */   
    swap(n1,n2);

    printf("The value of n1 and n2 in the main function after calling swap function are %d and %d \n\n", n1, n2);
}

void swap(int n1, int n2)
{
    int temp; 
    temp = n1;
    n1 = n2;
    n2 = temp;

    printf("The value of n1 and n2 in the swap function after swapping is %d and %d \n\n", n1, n2);
}
