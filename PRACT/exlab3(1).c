#include <stdio.h>

int main()
{
    int num, i, flag = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    for(i = 2; i <= num/2; i++)
    {
        if(num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(num == 1)
        printf("Not Prime\n");
    else if(flag == 0)
        printf("Prime Number\n");
    else
        printf("Not Prime\n");


    printf("\nPrime numbers from 1 to %d:\n", num);

    for(i = 2; i <= num; i++)
    {
        int j, prime = 1;

        for(j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if(prime == 1)
            printf("%d ", i);
    }

    return 0;
}