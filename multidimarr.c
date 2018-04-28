#include <stdio.h>

int main()
{
  // int aa[3][3] = {{5,1,7},{3,2,8},{6,4,9}};

   int aa[4][4]; 
   int sum = 0;
   for(int i = 0; i < 4; i++)
   {
       for(int j = 0; j < 4; j++)
       {
           printf("Enter value at aa[%d][%d].\n", i, j);
           scanf("%d", &aa[i][j]);
       }
       printf("\n");
   }  


   for(int i = 0; i < 4; i++)
   {
       for(int j = 0; j < 4; j++)
       {
          // printf("the value at aa[%d][%d] is : %d.\n", i, j, aa[i][j]);
          // printf("%d\t",aa[i][j]);
          sum = sum + aa[i][j];
          
       }
       printf("\n");
   }   
    printf("The sum is %d\n", sum);

   
}