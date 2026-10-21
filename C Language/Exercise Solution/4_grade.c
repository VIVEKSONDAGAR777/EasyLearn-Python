/*
exercise 4: input marks and display the grade using these rules.

      marks                    grade
       90 and above        A+
        80 to 89                  A
        70 to 79                  B
        60 to 69                  C
        50 to 59                  D
        35 to 49                  E
       below 35               Fail

steps
------------------------------------------
1. create variable marks
2. accept marks from user
3. check marks using if else if and display grade as per above rules
*/


#include<stdio.h>

void main()
{

    int marks;

    printf("enter marks:");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("grade is A+");
    }

    else if (marks >= 80)
    {
        printf("grade is A");
    }

    else if (marks >= 70)
    {
        printf("grade is B");
    }

    else if (marks >= 60)
    {
        printf("grade is C");
    }

    else if (marks >= 50)
    {
        printf("grade is D");
    }

    else if (marks >= 35)
    {
        printf("grade is E");
    }

    else
    {
        printf("fail");
    }

}
