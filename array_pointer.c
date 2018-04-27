/* WAP for Pointer to a array
 * Filename: var_pointer.c
 * Path: /home/diamond/cprograms
 * Created Date: Tuesday, April 24th 2018, 9:01:38 pm
 * Author: Aiman Kazi
 * 
 * Copyright (c) Visual Labs
 */
#include <stdio.h>

int main()
{
    int arr[3] = {5,1,7};
    int *p;

    int x = 9;
    p = arr;
    
    // printf("x is %d \n", *(&x));

    // Address of an array
    printf("The address of arr is %d \n", arr);
    
    // The address of arr is the value of p
    printf("The address of arr is %d \n", p);

    // Address of a pointer
    printf("The address of p is %d \n", &p);    
    
    // Retrieving the value of 1st element in an array
    printf("The value of arr at 0 is %d \n", *arr);
    printf("The value of arr at 0 is %d \n", *p);
    printf("The value of arr at 0 is %d \n", p[0]);
    
    // Retrieving the value of 2st element in an array
    printf("The value of arr at 1 is %d \n", *(arr+1));
    printf("The value of arr at 1 is %d \n", *(p+1));
    printf("The value of arr at 1 is %d \n", p[1]);
    
    // Retrieving the value of 3rd element in an array
    printf("The value of arr at 2 is %d \n", *(arr+2));
    printf("The value of arr at 2 is %d \n", *(p+2));
    printf("The value of arr at 2 is %d \n", p[2]);
    
    return 0;
}