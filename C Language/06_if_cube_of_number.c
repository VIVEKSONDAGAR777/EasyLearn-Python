/*
    Program : Find the cube of a given positive integer number
    Topic   : if Statement

    Steps:
        1. Create variables number and cube.
        2. Accept input in the variable number.
        3. If the number is negative,
             - convert it into a positive number (number = 0 - number)
             - print that the number was negative, so it is converted.
        4. Calculate the cube:  cube = number * number * number
        5. Display the cube.
*/

#include <stdio.h>

int main()
{
    int number, cube;

    printf("Enter number: ");
    scanf("%d", &number);

    // If the number is negative, convert it into positive
    if (number < 0)
    {
        number = 0 - number;
        printf("Number was negative, so it is converted into positive\n");
    }

    cube = number * number * number;

    printf("Cube: %d", cube);

    return 0;
}
