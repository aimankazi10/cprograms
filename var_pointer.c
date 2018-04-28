/* WAP for Pointer to a variable
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
    int a = 5;
    int *p;

    printf("The value inside a is %d \n", a);
    printf("The address of a is %d\n",&a);
    
    p = &a;

    printf("The value in p is : %d\n", *p );
    printf("The address of p is %d\n", &p);

    return 0;
}