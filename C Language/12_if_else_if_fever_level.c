/*
    Program : Check the fever level from body temperature
    Topic   : if - else if Ladder

    Rules (temperature in Fahrenheit):
        102.9 and above   -> High fever
        101.2 and above   -> Fever
        99.3 and above    -> Low grade fever
        below 99.3        -> Normal

    Steps:
        1. Create variable fh.
        2. Accept temperature in Fahrenheit into fh.
        3. Decide the fever level as per the above rules.
*/

#include <stdio.h>

int main()
{
    float fh;

    printf("Enter body temperature in Fahrenheit: ");
    scanf("%f", &fh);

    if (fh >= 102.9)
    {
        printf("You have high grade fever");
    }
    else if (fh >= 101.2)
    {
        printf("You have fever");
    }
    else if (fh >= 99.3)
    {
        printf("You have a low grade fever");
    }
    else
    {
        printf("You are normal");
    }

    return 0;
}
