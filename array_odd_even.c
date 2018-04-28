#include <stdio.h>

int main()
{
    int i;
    int j = 0;
    int k = 0;
    int n;

    int array[10];
    int odd[10];
    int even[10];

    printf("Enter the size of an array:\n");
    scanf("%d",&n);

    printf("Enter the elements of an array");   
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }  
    printf("Displaying the elements of an array\n");       
    for(i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }    

    printf("\n");
    printf("Now Processing :: \n");
    for(i = 0; i < n; i++)
    {
        if(array[i] % 2 ==0)
        {
            even[j] = array[i];
            j++;
        }
        else
        {
            odd[k] = array[i];
            k++;
        }
    } 

    printf("\n");
    printf("The odds are : \n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", odd[i]);
    }    
    printf("\n");
    printf("The evens are : \n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", even[i]);
    }    

    /*
    printf("\n");
    printf("The original array is : \n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }    
    printf("\n");
    */
}