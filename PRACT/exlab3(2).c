#include <stdio.h>

int main()
{
    int num, n, i;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter range: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}