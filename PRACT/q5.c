#include <stdio.h>

int main()
{
    int num, month;
    int a, b, c, max;
    float cost, sell;

  
    printf("Enter number: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("Number is Even\n");
    else
        printf("Number is Odd\n");



    printf("\nEnter month number (1-12): ");
    scanf("%d", &month);

    switch(month)
    {
        case 1: printf("January"); break;
        case 2: printf("February"); break;
        case 3: printf("March"); break;
        case 4: printf("April"); break;
        case 5: printf("May"); break;
        case 6: printf("June"); break;
        case 7: printf("July"); break;
        case 8: printf("August"); break;
        case 9: printf("September"); break;
        case 10: printf("October"); break;
        case 11: printf("November"); break;
        case 12: printf("December"); break;
        default: printf("Invalid Month");
    }


   
    printf("\n\nEnter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    max = (a>b) ? (a>c ? a : c) : (b>c ? b : c);

    printf("Maximum number = %d\n", max);


    printf("\nEnter cost price: ");
    scanf("%f", &cost);

    printf("Enter selling price: ");
    scanf("%f", &sell);

    if(sell > cost)
        printf("Profit = %.2f", sell - cost);
    else if(cost > sell)
        printf("Loss = %.2f", cost - sell);
    else
        printf("No Profit No Loss");

    return 0;
}