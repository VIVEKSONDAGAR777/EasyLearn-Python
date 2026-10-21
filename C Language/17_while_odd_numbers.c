/*
    Program : Print odd numbers from 1 to 99
    Topic   : while Loop

    Output:  1  3  5  7  9  11  13  15  17 ...... 99

    Steps:
        1. Create variable number and store 1 in it.
        2. Print number.
        3. Increase number by 2.  (number = number + 2)
        4. Repeat steps 2 and 3 while number is <= 99.
*/

#include <stdio.h>

int main()
{
    int number;

    number = 1;

    while (number <= 99)
    {
        printf("%5d", number);
        number = number + 2;    // move to the next odd number
    }

    // After the loop ends, number becomes 101
    printf("\nNumber = %d", number);

    return 0;
}
