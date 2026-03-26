#include <stdio.h>

int main()
{
    char str[100], longest[50];
    int i=0, words=1, len=0, max=0, j=0;

    printf("Enter sentence: ");
    gets(str);

    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            words++;
            if(len > max)
            {
                max = len;
                longest[j] = '\0';
                j = 0;
            }
            len = 0;
        }
        else
        {
            if(len >= max)
            {
                longest[j++] = str[i];
            }
            len++;
        }
        i++;
    }

    longest[j] = '\0';

    printf("Total words = %d\n", words);
    printf("Longest word = %s", longest);

    return 0;
}