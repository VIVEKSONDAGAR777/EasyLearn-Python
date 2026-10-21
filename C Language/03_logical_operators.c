/*
    Program : Logical Operators
    Topic   : Operators

    Logical operators are used to join two or more conditions.

        &&    AND   - true only when BOTH conditions are true
        ||    OR    - true when ANY ONE condition is true
        !     NOT   - reverses the result (true becomes false)

    In this program we check:  a < b && b > c
*/

#include <stdio.h>

int main()
{
    int a, b, c, result;

    // Accept three values from the user
    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("Enter value for b: ");
    scanf("%d", &b);

    printf("Enter value for c: ");
    scanf("%d", &c);

    // Example: 10 < 20 && 20 > 30
    result = a < b && b > c;

    printf("%d = %d < %d && %d > %d", result, a, b, b, c);

    return 0;
}
