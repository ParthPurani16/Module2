#include <stdio.h>
#include <string.h>

int factorial(int n);
int recursion(int n);

int main()
{
    int num,i;
    char str[100],rev[100];
    int len;

    printf("Enter number: ");
    scanf("%d",&num);

    printf("Factorial = %d\n",factorial(num));
    printf("Recursion Factorial = %d\n",recursion(num));

    printf("\nEnter string: ");
    scanf("%s",str);

    len=strlen(str);

    for(i=0;i<len;i++)
    {
        rev[i]=str[len-i-1];
    }
    rev[i]='\0';

    printf("Reverse = %s\n",rev);

    if(strcmp(str,rev)==0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

int factorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

int recursion(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return n*recursion(n-1);
}