#include <stdio.h>

int main()
{
    int i;

    printf("Break:\n");
    for(i=1;i<=10;i++)
    {
        if(i==5)
            break;
        printf("%d ",i);
    }

    printf("\n\nContinue:\n");
    for(i=1;i<=10;i++)
    {
        if(i==3)
            continue;
        printf("%d ",i);
    }

    int n,sum=0;

    printf("\n\nEnter number: ");
    scanf("%d",&n);

    i=1;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }

    printf("Sum = %d\n",sum);


    int num,temp,rem,result=0;

    printf("\nEnter number: ");
    scanf("%d",&num);

    temp=num;

    while(temp!=0)
    {
        rem=temp%10;
        result=result+rem*rem*rem;
        temp=temp/10;
    }

    if(result==num)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong Number");


    int arr[5];

    printf("\nEnter 5 numbers:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Reverse:\n");
    for(i=4;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}