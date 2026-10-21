/*
exercise 8: write a program to calculate and display simple interest of given amount, rate and year.
formula: simple interest = (amount * rate * year) / 100
steps
------------------------------------------
1. create variable amount, rate, year and interest
2. accept amount, rate and year from user
3. calculate interest = (amount * rate * year) / 100
4. display interest
*/

#include<stdio.h>

void main()
{
    float amount, rate, year, interest;

    printf("enter amount:");
    scanf("%f", &amount);

    printf("enter rate:");
    scanf("%f", &rate);

    printf("enter year:");
    scanf("%f", &year);

    interest = (amount * rate * year) / 100;

    printf("simple interest = %.2f", interest);

}
