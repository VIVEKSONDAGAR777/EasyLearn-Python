/*
    Program : Find the factorial of a given number
    Topic   : while Loop

    Example:
        Input   : 5
        Process : 5 * 4 * 3 * 2 * 1
        Output  : 120

    Steps:
        1. Create variables number and factorial.
        2. Accept the number from the user (assume 5).
        3. Store 1 in factorial.
        4. Multiply factorial by number, then decrease number by 1.
        5. Repeat step 4 while number is greater than 1.
*/

#include <stdio.h>

int main()
{
    int number, factorial;

    printf("Enter number: ");
    scanf("%d", &number);

    factorial = 1;

    while (number > 1)
    {
        factorial = factorial * number;
        number = number - 1;
    }

    printf("Factorial = %d", factorial);

    return 0;
}
