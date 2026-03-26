#include <stdio.h>

struct student
{
    char name[50];
    int roll;
    int marks;
};

int main()
{
    struct student s[3];
    int i;

    for(i=0;i<3;i++)
    {
        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }

    printf("\nStudent Details:\n");

    for(i=0;i<3;i++)
    {
        printf("Name: %s\n", s[i].name);
        printf("Roll: %d\n", s[i].roll);
        printf("Marks: %d\n", s[i].marks);
        printf("\n");
    }

    return 0;
}