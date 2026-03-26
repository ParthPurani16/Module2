#include <stdio.h>

int main()
{
    int a[5],i,j,temp,max;
    int b[3][3],sum=0;

    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Array elements:\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("\nAscending order:\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("\nDescending order:\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }

    max=a[0];
    for(i=1;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }

    printf("\nMax element = %d\n",max);


    printf("\nEnter 3x3 matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
            sum=sum+b[i][j];
        }
    }

    printf("Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    printf("Sum of matrix = %d",sum);

    return 0;
}