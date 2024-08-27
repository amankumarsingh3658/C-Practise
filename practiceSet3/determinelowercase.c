#include <stdio.h>

int main()
{
    char character;
    printf("Enter Character : ");
    scanf("%c", &character);

    if (character <= 122 && character >= 97) // Ascii values of lowercase characters
    {
        printf("It is lowercase");
    }
    else
    {
        printf("It is not lowercase");
    }

    return 0;
}