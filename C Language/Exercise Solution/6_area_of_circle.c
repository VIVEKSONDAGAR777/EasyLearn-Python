/*
exercise 6: write a program to calculate and display area of circle using given radius.
formula: area = 3.14 * radius * radius
steps
------------------------------------------
1. create variable radius and area
2. accept radius from user
3. calculate area = 3.14 * radius * radius
4. display area
*/

#include<stdio.h>

void main()

{
    float radius, area;
  
    printf("enter radius:");
    scanf("%f", &radius);
 
    area = 3.14 * radius * radius;
    
    printf("area of circle = %.2f", area);

}
