#include <stdio.h>

int main()
{
    int t1 = 0;
    int t2 = 1;
    int nextTerm = 0;
    int n;

    printf("Enter a limit for fibonacci\n");
    scanf("%d",&n);

    printf("Fibonacci series is %d %d", t1,t2);

    nextTerm = t1+ t2;

    while(nextTerm <= n)
    {
        printf(" %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    printf("\n");
    return 0;
}