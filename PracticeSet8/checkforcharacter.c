#include <stdio.h>

void checkCharacter(char *st, char c)
{
    int i = 0;
    int count = 0;
    while (*st != '\0')
    {
        if (*st == c)
        {
            count++;
        }
        *st++;
    }
    if (count > 0)
    {
        printf("The character is present");
    }
    else
    {
        printf("The character is not present");
    }
}

int main()
{
    char st[100];
    char c;
    printf("Enter a String : ");
    fgets(st, 100, stdin);

    printf("Enter the character to check for : ");
    scanf("%c", &c);

    checkCharacter(st, c);
    return 0;
}