/*
    Program : Print the multiplication table of a given number
    Topic   : while Loop

    Example:
        Input : 5
        Output:
            5 * 1  = 5
            5 * 2  = 10
            5 * 3  = 15
            ..........
            5 * 10 = 50

    Steps:
        1. Create variables number, multiplier and answer.
        2. Accept input from the user in number.
        3. Store 1 in multiplier.
        4. answer = number * multiplier
        5. Print:  number * multiplier = answer
        6. Increase multiplier by 1 and repeat while multiplier <= 10.
*/

#include <stdio.h>

int main()
{
    int number, multiplier, answer;

    printf("Enter number: ");
    scanf("%d", &number);

    multiplier = 1;

    while (multiplier <= 10)
    {
        answer = number * multiplier;
        printf("%d * %d = %d\n", number, multiplier, answer);
        multiplier = multiplier + 1;
    }

    return 0;
}
