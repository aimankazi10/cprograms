#include <stdio.h>

int main()
{
    int n; // to store user input

    int factorial(int n);
   
    // Accepting user input
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Factorial of %d is %d\n", n, factorial(n) );

    // singh.nitesh@hdbfs.com
}

int factorial(int n)
{
    
    if (n>=1) 
    {
        return n * factorial(n-1);
    }
    else
    {
        return 1;
    }
}