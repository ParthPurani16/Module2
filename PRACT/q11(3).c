#include <stdio.h>

void join(char a[], char b[], char c[]);

int main()
{
    char str1[100], str2[100], str3[200];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    join(str1, str2, str3);

    printf("Joined string = %s", str3);

    return 0;
}

void join(char a[], char b[], char c[])
{
    int i=0, j=0;

    while(a[i] != '\0')
    {
        c[i] = a[i];
        i++;
    }

    while(b[j] != '\0')
    {
        c[i] = b[j];
        i++;
        j++;
    }

    c[i] = '\0';
}