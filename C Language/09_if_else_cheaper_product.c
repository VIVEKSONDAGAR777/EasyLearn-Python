/*
    Program : Find which product is cheaper and which is expensive
    Topic   : if-else Statement

    Steps:
        1. Create variables price1, price2, weight1, weight2,
           price_per_gram1 and price_per_gram2.
        2. Accept input from the user for price1 and weight1.
        3. Accept input from the user for price2 and weight2.
        4. Find price per gram of product 1:  price1 / weight1
        5. Find price per gram of product 2:  price2 / weight2
        6. The product with less price per gram is cheaper.
*/

#include <stdio.h>

int main()
{
    int price1, price2, weight1, weight2;
    float price_per_gram1, price_per_gram2;

    printf("Enter 1st product price: ");
    scanf("%d", &price1);

    printf("Enter 1st product weight (in gram): ");
    scanf("%d", &weight1);

    printf("Enter 2nd product price: ");
    scanf("%d", &price2);

    printf("Enter 2nd product weight (in gram): ");
    scanf("%d", &weight2);

    // (float) is written so that the answer comes in decimal,
    // otherwise integer division gives a wrong (rounded) answer
    price_per_gram1 = (float)price1 / weight1;
    price_per_gram2 = (float)price2 / weight2;

    if (price_per_gram1 < price_per_gram2)
    {
        printf("Product 1 is cheaper");
    }
    else
    {
        printf("Product 2 is cheaper");
    }

    return 0;
}
