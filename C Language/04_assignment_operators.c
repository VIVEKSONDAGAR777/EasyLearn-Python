/*
    Program : Assignment Operators
    Topic   : Operators

    Assignment operators are short forms of writing calculations.

        a += b    means    a = a + b
        a -= b    means    a = a - b
        a *= b    means    a = a * b
        a /= b    means    a = a / b
        a %= b    means    a = a % b   (remainder)
*/

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("Enter value for b: ");
    scanf("%d", &b);

    a += b;                     // a = a + b
    printf("\na = %d", a);

    a -= b;                     // a = a - b
    printf("\na = %d", a);

    a *= b;                     // a = a * b
    printf("\na = %d", a);

    a /= b;                     // a = a / b
    printf("\na = %d", a);

    a %= b;                     // a = a % b
    printf("\na = %d", a);

    return 0;
}
