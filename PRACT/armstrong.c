#include <stdio.h>
int main()
{
    int no, sum = 0, r, f;
    printf("\n Enter no");
    scanf("%d", &no);
    f = no;
    while (no > 0)
    {
        r = no % 10;
        no /= 10;
        sum = sum + (r * r * r);
    }

    printf("\n Sum is digit %d", sum);
    if (f == sum)
    {
        printf("\n It is armstrong no");
    }
    else
    {
        printf("\n It is not armstrong no");
    }
}