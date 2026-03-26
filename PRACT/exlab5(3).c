#include <stdio.h>
#include <string.h>

int numberPalindrome(int n)
{
    int rev = 0, rem, temp;

    temp = n;

    while(n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if(temp == rev)
        return 1;
    else
        return 0;
}

int stringPalindrome(char str[])
{
    int i, len;

    len = strlen(str);

    for(i = 0; i < len/2; i++)
    {
        if(str[i] != str[len-i-1])
            return 0;
    }

    return 1;
}

int main()
{
    int num;
    char str[100];

    printf("Enter number: ");
    scanf("%d", &num);

    if(numberPalindrome(num))
        printf("Number is Palindrome\n");
    else
        printf("Number is Not Palindrome\n");

    printf("Enter string: ");
    scanf("%s", str);

    if(stringPalindrome(str))
        printf("String is Palindrome");
    else
        printf("String is Not Palindrome");

    return 0;
}