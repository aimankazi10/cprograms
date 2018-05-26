/*
 * Filename: firstnodd.c
 * Path: cprograms
 * Created Date: Saturday, May 26th 2018, 3:58:46 pm
 * Author: Aiman Kazi
 * 
 * Copyright (c) Visual Labs 
 */

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the n number: ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i = i + 2 )
    {
        printf("%d \n", i);
    }

    return 0;
}
