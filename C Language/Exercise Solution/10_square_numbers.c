/*
exercise 10: print the square of numbers from 1 to 10. (while)
steps
------------------------------------------
1. create variable number and square
2. store 1 in number
3. square = number * number
4. print number and square
5. number = number + 1
6. repeat while number <= 10
*/

#include<stdio.h>

void main()
{
    int number, square;
    number = 1;
  
  while (number <= 10)
    {
        square = number * number;
   
        printf("\n%d = %d", number, square);
       
        number = number + 1;
    }
}
