#include <stdio.h>

int main()
{
    int a = 10;
    if (a = 11) // This is not equality operator
    {
        printf("I am 11");
    }
    else
    {
        printf("I am Not 11");
    }

    return 0;
}