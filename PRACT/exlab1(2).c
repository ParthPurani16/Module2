#include <stdio.h>

int main()
{
    int num;

    printf("Enter number: ");
    scanf("%d",&num);

    if(num % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");


    if(num > 0)
        printf("Positive\n");
    else if(num < 0)
        printf("Negative\n");
    else
        printf("Zero\n");


    if(num % 3 == 0 && num % 5 == 0)
        printf("Multiple of 3 and 5");
    else
        printf("Not multiple of 3 and 5");

    return 0;
}