/* WAP to check whether the entered string is palindrome or not 
 * (Do not use string header file)
 *
 * Filename: palindrome.c
 * Path: /home/diamond/cprograms
 * Created Date: Tuesday, April 24th 2018, 8:17:15 pm
 * Author: diamond
 * 
 * Copyright (c) Visual Labs
 */
#include <stdio.h>
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"



int main()
{
    // An array of size 100
    char text[100];
    int begin;
    int middle;
    int end;
    int length = 0;

    // Request the user for string
    printf("Enter a string of your choice:\n");
    gets(text);

    // loop will determine the length of the string
    while(text[length] != '\0')
        length++;
    
    // determine the end index position of string
    end = length - 1;

    // determine the center index position of string
    middle = length / 2;

    for(begin = 0; begin < middle; begin++)
    {
        // if the character miss match it will go inside the if statement
        if(text[begin] != text[end])
        {
            printf(ANSI_COLOR_RED "Not a palindrome \n");
            break; // exit from the loop
        }
        end--;
    }
    if(begin == middle)
        printf(ANSI_COLOR_GREEN "It is a palindrome \n");

    return 0;
}