/*
 * Filename: sizeofint.c
 * Path: cprograms
 * Created Date: Tuesday, June 5th 2018, 12:42:20 am
 * Author: Aiman Kazi
 * 
 * Copyright (c) 2018 Visual Labs Learning Solution
 */

#include <stdio.h>

int main(void)
{
    int arr[] = {5,1,7,3,9};

   printf("Size of integer in this compiler is %u\n", sizeof(int));
   printf("Size of array is %u.\n", sizeof(arr));

   // Size of integer in this compiler is 4
   // Size of array is 20.

   
   for(int i = 0; i < 5; i++)
   {
       /* code */
       printf("Address arr[%d] is %u.\n", i, &arr[i]);
   }

   /* Address arr[0] is 652004528.
      Address arr[1] is 652004532.
      Address arr[2] is 652004536.
      Address arr[3] is 652004540.
      Address arr[4] is 652004544.
   */
    
}