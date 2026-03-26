#include <stdio.h>

int main()
{
    int a, area;

    printf("Enter side: ");
    scanf("%d", &a);

    area = a * a;

    printf("Area of Square = %d", area);

    return 0;
}