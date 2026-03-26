#include <stdio.h>

int main()
{
    int i = 1;

    printf("While Loop:\n");
    while(i <= 10)
    {
        printf("%d ", i);
        i++;
    }

    printf("\n\nFor Loop:\n");
    for(i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }

    printf("\n\nDo While Loop:\n");
    i = 1;
    do
    {
        printf("%d ", i);
        i++;
    } 
    while(i <= 10);


    int n, even = 0, odd = 0, even_sum = 0, odd_sum = 0;

    printf("\n\nEnter 10 numbers:\n");
    for(i = 1; i <= 10; i++)
    {
        scanf("%d", &n);

        if(n % 2 == 0)
        {
            even++;
            even_sum = even_sum + n;
        }
        else
        {
            odd++;
            odd_sum = odd_sum + n;
        }
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);
    printf("Sum of even numbers = %d\n", even_sum);
    printf("Sum of odd numbers = %d\n", odd_sum);


    int num, reverse = 0, rem;

    printf("\nEnter number: ");
    scanf("%d", &num);

    while(num != 0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }

    printf("Reverse = %d", reverse);

    return 0;
}