/*
 * Filename: fs_may2016.c
 * Path: cprograms
 * Created Date: Monday, May 28th 2018, 4:34:20 pm
 * Author: Aiman Kazi
 * 
 * Copyright (c) 2018 Visual Labs Learning Solution
 */
#include <stdio.h>

int main()
{
    // Two file pointers for one file each
    FILE *fp1;
    FILE *fp2;

    char ch; // var of type character

    fp1 = fopen("abc.txt","r");
    fp2 = fopen("xyz.txt","w");

    while(1)
    {
        ch = fgetc(fp1);
        
        if(ch >= 65 && ch <= 90) // check the range if capital letters
        {
         ch = ch + 32;   // make it lower case
        }

        if(ch == EOF) 
            break; // exit out of loop
        else
            putc(ch, fp2);    

    }

    printf("File copied successfully.\n");

    fclose(fp1); // close the file
    fclose(fp2); // close the file
}
