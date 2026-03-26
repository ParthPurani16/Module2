#include <stdio.h>

int fib(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}

int main()
{
    int n,i,a=0,b=1,c;

    printf("Enter number of terms: ");
    scanf("%d",&n);

    printf("Fibonacci Series (Recursive):\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",fib(i));
    }

    printf("\n\nNth Fibonacci using Iterative:\n");

    for(i=2;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }

    if(n==1)
        printf("0");
    else if(n==2)
        printf("1");
    else
        printf("%d",b);

    printf("\nNth Fibonacci using Recursive:\n");
    printf("%d",fib(n-1));

    return 0;
}