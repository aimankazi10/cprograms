/* WAP to transpose a matrix without using a function
 * Filename: /home/diamond/cprograms/transposebasic.c
 * Path: /home/diamond/cprograms
 * Created Date: Saturday, April 28th 2018, 4:36:56 pm
 * Author: Aiman Kazi
 * 
 * Copyright (c) Visual Labs
 */


#include <stdio.h>

int main()
{
    int m; // accept user input for rows
    int n; // accept user input for columns
    int c; // outer loop counter
    int d; // inner loop counter
    int matrix[10][10]; 
    int transpose[10][10];

    printf("Enter the number of rows and columns of matrix:\n");
    scanf("%d%d", &m, &n);

    // Accepting user inputs and storing in multi-dimension array 
    printf("Enter elements of the matrix\n");
    for (c = 0; c < m; c++)
    {
      for(d = 0; d < n; d++)
      {
         scanf("%d", &matrix[c][d]);
      }  
    }

    // Display the user entries
    printf("Given elements of the matrix:\n");
    for (c = 0; c < m; c++)
    {
      for(d = 0; d < n; d++)
      {
         printf("%d\t", matrix[c][d]);
      }
      printf("\n"); 
    }
    
    printf("\n");
    printf("Transpose operation begins\n");
    // Perform the tranpose operation
    for (c = 0; c < m; c++)
    {
      for( d = 0 ; d < n ; d++ )
         transpose[d][c] = matrix[c][d];
    }

    // Display transpose of a matrix
    printf("Transpose of the matrix:\n");
    for (c = 0; c < n; c++) 
    {
      for (d = 0; d < m; d++)
      {   
          printf("%d\t", transpose[c][d]);
      }
      printf("\n");
    }
}