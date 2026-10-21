/*
    Program : Check whether the given letter is a vowel or not
    Topic   : switch Statement

    Vowels are: a, e, i, o, u  (both small and capital letters)

    Steps:
        1. Create variable letter.
        2. Accept one letter from the user into letter.
        3. Using switch, check the letter:
             if it is a, e, i, o or u -> it is a vowel
             otherwise                 -> it is not a vowel
*/

#include <stdio.h>

int main()
{
    char letter;

    printf("Enter letter: ");
    scanf("%c", &letter);

    switch (letter)
    {
        case 'a':
        case 'A':
            printf("It is a vowel");
            break;

        case 'e':
        case 'E':
            printf("It is a vowel");
            break;

        case 'i':
        case 'I':
            printf("It is a vowel");
            break;

        case 'o':
        case 'O':
            printf("It is a vowel");
            break;

        case 'u':
        case 'U':
            printf("It is a vowel");
            break;

        default:
            printf("It is not a vowel");
    }

    return 0;
}
