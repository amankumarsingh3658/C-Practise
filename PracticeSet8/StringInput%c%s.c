#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    char str2[20];

    printf("Enter the value of first String : ");
    scanf("%s", str);

    printf("Enter The value of second String : ");
    char c;
    int i = 0;
    while (c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        str2[i] = c;
        i++;
    }
    str2[i-1] = '\0';

    printf("the value of first string is %s\n",str);
    printf("the value of Second string is %s\n",str2);
    printf("the value of strcmp for strings is %d",strcmp(str,str2));

    return 0;
}