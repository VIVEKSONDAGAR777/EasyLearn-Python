/*
    Program : Display month name from the given month number
    Topic   : if Statement

    Here every month is checked with a separate if statement.
    (This example covers months 1 to 6.)
*/

#include <stdio.h>

int main()
{
    int month_number;

    printf("Enter month number: ");
    scanf("%d", &month_number);

    if (month_number == 1)
    {
        printf("January");
    }

    if (month_number == 2)
    {
        printf("February");
    }

    if (month_number == 3)
    {
        printf("March");
    }

    if (month_number == 4)
    {
        printf("April");
    }

    if (month_number == 5)
    {
        printf("May");
    }

    if (month_number == 6)
    {
        printf("June");
    }

    return 0;
}
