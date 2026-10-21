/*
exercise 9: print numbers from 10 to 1 in reverse order. (while)
steps
------------------------------------------
1. create variable number and store 10 in it
2. print number
3. number = number - 1
4. repeat while number >= 1
*/

#include<stdio.h>

void main()
{
    int number;
    number = 10;

    while (number >= 1)
    {
        printf("%d ", number);
        number = number - 1;
    }

}
