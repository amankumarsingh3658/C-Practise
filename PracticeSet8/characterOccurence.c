#include <stdio.h>

int checkOccurence(char *str, char c)
{
    int i = 0;
    int count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
        {
            count++;
        }
        i++;
    }
    return count;
}

int main()
{
    int occurence;
    char str[100];
    char c;
    printf("Enter String you want to check for occurences : ");
    fgets(str , 100, stdin);
    printf("Enter the character you want to check for occurences : ");
    scanf("%c",&c);
     occurence = checkOccurence(str, c);
    printf("The occurence of character in string is %d",occurence);
    return 0;
}