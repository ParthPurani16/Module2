#include <stdio.h>

int main()
{
    int a[10], i, max, min, j, temp;

    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    max = min = a[0];

    for(i = 1; i < 10; i++)
    {
        if(a[i] > max)
            max = a[i];

        if(a[i] < min)
            min = a[i];
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);


    for(i = 0; i < 10; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Ascending order:\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}