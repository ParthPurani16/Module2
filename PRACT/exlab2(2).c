#include <stdio.h>

int main()
{
    int a, b, c, max, min, choice;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b)
    {
        if(a>c)
            max = a;
        else
            max = c;
    }
    else
    {
        if(b>c)
            max = b;
        else
            max = c;
    }

    if(a<b)
    {
        if(a<c)
            min = a;
        else
            min = c;
    }
    else
    {
        if(b<c)
            min = b;
        else
            min = c;
    }

    printf("Largest = %d\n", max);
    printf("Smallest = %d\n", min);


    if(max==a) choice=1;
    else if(max==b) choice=2;
    else choice=3;

    switch(choice)
    {
        case 1: printf("Largest using switch = %d\n", a); break;
        case 2: printf("Largest using switch = %d\n", b); break;
        case 3: printf("Largest using switch = %d\n", c); break;
    }

    if(min==a) choice=1;
    else if(min==b) choice=2;
    else choice=3;

    switch(choice)
    {
        case 1: printf("Smallest using switch = %d", a); break;
        case 2: printf("Smallest using switch = %d", b); break;
        case 3: printf("Smallest using switch = %d", c); break;
    }

    return 0;
}