#include <stdio.h>

long int fact_iterative(int n)
{
    long int fact = 1;
    int i;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

long int fact_recursive(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return n * fact_recursive(n - 1);
}

int main()
{
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Factorial using Iterative = %ld\n", fact_iterative(num));
    printf("Factorial using Recursive = %ld", fact_recursive(num));

    return 0;
}