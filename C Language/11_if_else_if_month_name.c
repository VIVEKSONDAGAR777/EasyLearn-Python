/*
    Program : Display month name from the given month number
    Topic   : if - else if Ladder

    Steps:
        1. Create variable month.
        2. Accept input in the variable month.
        3. Check the month number one by one:
             month == 1  -> January
             month == 2  -> February
             ... and so on up to 12.
        4. If the number is not between 1 to 12,
           display "not a valid month number".
*/

#include <stdio.h>

int main()
{
    int month;

    printf("Enter month (1 to 12): ");
    scanf("%d", &month);

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
    else
    {
        printf("It is not a valid month number.");
    }

    return 0;
}
