/*
    Program : Display month name from the given month number
    Topic   : Nested if (if inside if)

    First the outer if checks whether the month number is valid
    (between 1 to 12). Only then the inner if - else if checks
    which month it is.

    Steps:
        1. Create variable month.
        2. Accept input from the user in month.
        3. If month is >= 1 and <= 12, check the month number inside.
        4. Otherwise, print "it is not a valid month".
*/

#include <stdio.h>

int main()
{
    int month;

    printf("Enter month (1 to 12): ");
    scanf("%d", &month);

    // Outer if: is the month number valid?
    if (month >= 1 && month <= 12)
    {
        // Inner if - else if: which month is it?
        if (month == 1)
        {
            printf("It is January");
        }
        else if (month == 2)
        {
            printf("It is February");
        }
        else if (month == 3)
        {
            printf("It is March");
        }
        else if (month == 4)
        {
            printf("It is April");
        }
        else if (month == 5)
        {
            printf("It is May");
        }
        else if (month == 6)
        {
            printf("It is June");
        }
        else if (month == 7)
        {
            printf("It is July");
        }
        else if (month == 8)
        {
            printf("It is August");
        }
        else if (month == 9)
        {
            printf("It is September");
        }
        else if (month == 10)
        {
            printf("It is October");
        }
        else if (month == 11)
        {
            printf("It is November");
        }
        else if (month == 12)
        {
            printf("It is December");
        }
    }
    else
    {
        printf("It is not a valid month");
    }

    return 0;
}
