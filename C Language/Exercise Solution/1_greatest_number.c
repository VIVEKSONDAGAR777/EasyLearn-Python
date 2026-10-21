/*
exercise 1: input three numbers and print the greatest.
steps
------------------------------------------
1. create variable num1, num2, num3
2. accept input from user in num1, num2 and num3
3. if num1 is greater than num2 and num3 then num1 is greatest
4. else if num2 is greater than num3 then num2 is greatest
5. else num3 is greatest
*/


#include<stdio.h>
void main()
{
    int num1, num2, num3;

    printf("enter first number:");
    scanf("%d", &num1);

    printf("enter second number:");
    scanf("%d", &num2);

    printf("enter third number:");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("%d is greatest number", num1);
    }
    else if (num2 > num3)
    {
        printf("%d is greatest number", num2);
    }
    else
    {
        printf("%d is greatest number", num3);
    }
}
