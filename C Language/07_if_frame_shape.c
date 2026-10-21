/*
    Program : Find whether a frame is Portrait, Landscape or Square
    Topic   : if Statement

    Steps:
        1. Create variables length and width.
        2. Accept input from the user in length.
        3. Accept input from the user in width.
        4. If length is greater than width  -> frame is Portrait.
        5. If width is greater than length  -> frame is Landscape.
        6. If length and width are equal    -> frame is Square.
*/

#include <stdio.h>

int main()
{
    int length, width;

    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter width: ");
    scanf("%d", &width);

    if (length > width)
    {
        printf("Shape is Portrait");
    }

    if (width > length)
    {
        printf("Shape is Landscape");
    }

    if (width == length)
    {
        printf("Shape is Square");
    }

    return 0;
}
