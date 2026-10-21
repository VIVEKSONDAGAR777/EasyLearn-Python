/*
    Program : Relational Operators
    Topic   : Operators

    Relational operators are also called Comparison operators.
    They are used to compare two variables / values.
    The result is always 1 (true) or 0 (false).

        ==    equal to                  (checks both values are same)
        !=    not equal to              (checks both values are different)
        <     less than
        >     greater than
        <=    less than or equal to
        >=    greater than or equal to
*/

#include <stdio.h>

int main()
{
    int a, b;

    a = 10;
    b = 11;

    // Every printf shows: a, operator, b, = result
    printf("%d == %d = %d\n", a, b, a == b);
    printf("%d != %d = %d\n", a, b, a != b);
    printf("%d <  %d = %d\n", a, b, a < b);
    printf("%d >  %d = %d\n", a, b, a > b);
    printf("%d <= %d = %d\n", a, b, a <= b);
    printf("%d >= %d = %d\n", a, b, a >= b);

    return 0;
}
