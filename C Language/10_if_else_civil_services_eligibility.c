/*
    Program : Check whether a person can apply for Civil Services or not
    Topic   : if-else Statement

    Rule: the person is eligible when the age is above 17 and below 35.

    Steps:
        1. Create variable age.
        2. Accept age from the user.
        3. If age is in the eligible range, display "eligible",
           otherwise display "not eligible".
*/

#include <stdio.h>

int main()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age > 17 && age < 35)
    {
        printf("Person is eligible for Civil Services");
    }
    else
    {
        printf("Person is not eligible for Civil Services");
    }

    return 0;
}
