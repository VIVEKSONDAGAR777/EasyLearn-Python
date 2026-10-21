/*
exercise 5: check the given number is positive or negative.
steps
------------------------------------------

1. create variable number
2. accept number from user
3. if number > 0 then print number is positive
   if number < 0 then print number is negative
   otherwise number is zero
*/

#include<stdio.h>

void main()
{
    int number;

    printf("enter number:");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("number is positive");
    }

    else if (number < 0)
    {
        printf("number is negative");
    }

    else
    {
        printf("number is zero");
    }

}
