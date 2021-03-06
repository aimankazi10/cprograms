/* WAP to perform transpose using a transpose function
 * Filename: tra.nspose.c
 * Path: /home/diamond/cprograms
 * Created Date: Saturday, April 28th 2018, 4:58:12 pm
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

    // declare transposeFunc
    void transposeFunc(int matrix[10][10], int m , int n);

    printf("Enter the number of rows and columns of matrix:\n");
    scanf("%d%d", &m, &n);

    printf("Enter elements of the matrix\n");
    for (c = 0; c < m; c++)
    {
      for(d = 0; d < n; d++)
      {
         scanf("%d", &matrix[c][d]);
      }  
    }

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
    // call transposeFunc
    transposeFunc(matrix, m, n);
   
}
// Define transposeFunc
void transposeFunc (int matrix[10][10], int m , int n)
{
    printf("Inside transpose function\n");
    int c;
    int d;
    int flag = 0;
    int transpose[10][10];

    printf("Transpose operation begins\n");
    for (c = 0; c < m; c++)
    {
      for( d = 0 ; d < n ; d++ )
         transpose[d][c] = matrix[c][d];
    }

    printf("Transpose of the matrix:\n");
    for (c = 0; c < n; c++) 
    {
      for (d = 0; d < m; d++)
      {   
          printf("%d\t", transpose[c][d]);
      }
      printf("\n");
    }

    // Check whether symmetric or not

    printf("Symmetric -- Asymmetric Check in process:\n");
    for (c = 0; c < n; c++) 
    {
      for (d = 0; d < m; d++)
      {   
        if(matrix[c][d] != transpose[c][d])
        {
            flag++;
        }  
        
      }
    }

    if(flag == 0)
    {
        printf("Symmetric Matrix \n");
    }    
    else
    {
        printf("Asymmetric Matrix \n");
    }

}