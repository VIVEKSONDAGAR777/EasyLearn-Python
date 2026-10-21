/*
    Program : Find whether the given year is a leap year or not
    Topic   : Nested if (if inside if)

    Leap year rules:
        - A year divisible by 4 but not by 100 is a leap year.
        - A year divisible by 100 as well as 400 is also a leap year.
        - All other years are not leap years.

    Steps:
        1. Create variables year, remainder1, remainder2, remainder3.
        2. Accept the year from the user.
        3. Find the remainders:
             remainder1 = year % 4
             remainder2 = year % 100
             remainder3 = year % 400
        4. If remainder1 == 0 and remainder2 != 0 -> leap year.
           Otherwise, if remainder2 == 0 and remainder3 == 0 -> leap year,
           else -> not a leap year.
*/

#include <stdio.h>

int main()
{
    int year, remainder1, remainder2, remainder3;

    printf("Enter year: ");
    scanf("%d", &year);

    remainder1 = year % 4;
    remainder2 = year % 100;
    remainder3 = year % 400;

    if (remainder1 == 0 && remainder2 != 0)
    {
        printf("Given year is a leap year");
    }
    else
    {
        if (remainder2 == 0 && remainder3 == 0)
        {
            printf("Given year is a leap year");
        }
        else
        {
            printf("Given year is not a leap year");
        }
    }

    return 0;
}
