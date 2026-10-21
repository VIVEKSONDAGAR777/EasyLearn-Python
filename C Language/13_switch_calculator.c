/*
    Program : Simple Calculator using switch case
    Topic   : switch Statement

    The user enters two numbers and then chooses the operation:
        1 -> Addition
        2 -> Subtraction
        3 -> Multiplication
        4 -> Division

    Steps:
        1. Create variables num1, num2, choice and result (float).
        2. Accept input from the user in num1 and num2.
        3. Accept the user's choice in the variable choice.
        4. Using switch, do the operation as per the choice.
        5. Display the result.
*/

#include <stdio.h>

int main()
{
    int num1, num2, choice;
    float result;

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    printf("\nPress 1 for Addition");
    printf("\nPress 2 for Subtraction");
    printf("\nPress 3 for Multiplication");
    printf("\nPress 4 for Division");

    printf("\nEnter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            result = num1 + num2;
            break;

        case 2:
            result = num1 - num2;
            break;

        case 3:
            result = num1 * num2;
            break;

        case 4:
            // (float) is written so division gives a decimal answer
            result = (float)num1 / num2;
            break;

        default:
            printf("Invalid choice");
            break;
    }

    // Show the result only when the choice was valid
    if (choice >= 1 && choice <= 4)
    {
        printf("Result = %.2f", result);
    }

    return 0;
}
