/*
 * Filename: arrayvspointers.c
 * Path: cprograms
 * Created Date: Tuesday, June 5th 2018, 12:58:57 am
 * Author: Aiman Kazi
 * 
 * Copyright (c) 2018 Visual Labs Learning Solution
 * Revision History 
 * 1) Array name gives address of first element of array.
 * 2) Array members are accessed using pointer arithmetic.
 * 3) Array parameters are always passed as pointers, even when we use square brackets.
 * 4) 
 */

#include <stdio.h>

int fun(int ptr[])
{
    int x = 10;
    printf("sizeof(ptr) = %d\n", sizeof(ptr));
    printf("Address of ptr = %d\n", ptr);

    return 0;
}

int main()
{
    int arr[] = {5,1,7,3,9};
    
    int x = 10;

    int *ptr = &x;

    int *ptrarr = arr;
    
    printf("Addres of variable x is %d \n", &x);
    printf("Address of pointer is %d \n", ptr);
    printf("Address of array is %d \n", arr);

    // compilation error\
    arr = &x 

    // Pointers are used for storing address of dynamically allocated arrays 
    // and for arrays which are passed as arguments to functions.

    printf("Value of first element is %d\n", *arr);
    printf("Value of first element is %d \n", *ptrarr);

    printf("Value of first element is %d\n", *(arr+1));
    printf("Value of first element is %d \n", *(ptrarr+1));
    
    // Array parameters are always passed as pointers, even when we use square brackets.
    fun(arr);

    return 0;
    
}
