

#include <stdio.h>

int main()
{
   int a;

    /* Input month number from user */
    printf("Enter month number(1-12): ");
    scanf("%d", &a);

    switch(a)
    {
        case 1: 
            printf("January");
            break;
        case 2: 
            printf("February");
            break;
        case 3: 
            printf("March");
            break;
        case 4: 
            printf("April");
            break;
        case 5: 
            printf("May");
            break;
        case 6: 
            printf("June");
            break;
        case 7: 
            printf("July");
            break;
        case 8: 
            printf("August");
            break;
        case 9: 
            printf("September");
            break;
        case 10: 
            printf("October");
            break;
        case 11: 
            printf("November");
            break;
        case 12: 
            printf("December");
            break;
        default: 
            printf("Invalid input! Please enter month number between 1-12");

    }
}
