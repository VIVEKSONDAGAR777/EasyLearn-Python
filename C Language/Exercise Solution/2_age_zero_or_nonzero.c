/*
exercise 2: input age and check whether it is zero or non-zero.
steps
------------------------------------------
1. create variable age
2. accept age from user
3. if age == 0 then print age is zero
   else print age is non-zero
*/


#include<stdio.h>

void main()
{
    int age;

    printf("enter age:");
    scanf("%d", &age);

    if (age == 0)
    {
        printf("age is zero");
    }

    else

    {
        printf("age is non-zero");
    }
}
