/*
exercise 3: input marks and print pass if marks are above 35, otherwise print fail.
steps
------------------------------------------
1. create variable marks
2. accept marks from user
3. if marks > 35 then print pass
   else print fail
*/

#include<stdio.h>

void main()

{
    int marks;

    printf("enter marks:");
    scanf("%d", &marks);

    if (marks > 35)
    {
        printf("pass");
    }

    else

    {
        printf("fail");
    }

}
