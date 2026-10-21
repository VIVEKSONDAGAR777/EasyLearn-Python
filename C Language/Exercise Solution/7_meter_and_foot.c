/*
exercise 7: write a program to calculate and display meter and remaining foot of given foot.
(1 meter = 3.28 foot)
steps
------------------------------------------
1. create variable foot, meter and remaining_foot
2. accept foot from user
3. calculate full meter = foot / 3.28 (only whole part)
4. remaining_foot = foot - (meter * 3.28)
5. display meter and remaining foot
*/


#include<stdio.h>

void main()
{

    float foot, remaining_foot;
    int meter;

    printf("enter foot:");
    scanf("%f", &foot);

    meter = foot / 3.28;

    remaining_foot = foot - (meter * 3.28);

    printf("meter = %d and remaining foot = %.2f", meter, remaining_foot);
}
