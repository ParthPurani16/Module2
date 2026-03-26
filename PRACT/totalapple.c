#include <stdio.h>

int main()
{
    int students, apples;

    printf("Enter number of students: ");
    scanf("%d", &students);

    apples = students * 5;

    printf("Total apples required = %d", apples);

    return 0;
}