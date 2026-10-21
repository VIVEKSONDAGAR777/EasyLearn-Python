/*
    Program : Unary Operators (Increment / Decrement)
    Topic   : Operators

        ++    increment - increases the value by 1
        --    decrement - decreases the value by 1

    Prefix  (++a) : first increase the value, then use it
    Postfix (a++) : first use the value, then increase it
*/

#include <stdio.h>

int main()
{
    int a = 10;
    int b = 0;

    b = a++;                    // postfix: b gets 10, then a becomes 11
    printf("a = %d  b = %d", a, b);

    b = a--;                    // postfix: b gets 11, then a becomes 10
    printf("\na = %d  b = %d", a, b);

    b = ++a;                    // prefix: a becomes 11, then b gets 11
    printf("\na = %d  b = %d", a, b);

    b = --a;                    // prefix: a becomes 10, then b gets 10
    printf("\na = %d  b = %d", a, b);

    return 0;
}
