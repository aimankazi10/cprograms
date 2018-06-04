/*
 * Filename: arrayindex.c
 * Path: cprograms
 * Created Date: Tuesday, June 5th 2018, 12:31:29 am
 * Author: Aiman Kazi
 * 
 * Copyright (c) 2018 Your Company
 */
#include <stdio.h>

int main(void)
{
    int arr[2] = {5,1};
    
    printf("%d \n", arr[1]);
    
    printf("%d \n", arr[2]);
    
    // There is no index out of bound exception in C programming
    
    return 0;
}