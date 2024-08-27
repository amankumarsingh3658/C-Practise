#include <stdio.h>

int main()
{
    int i;
    int skip = 5;

    for (int i = 0; i < 10; i++)
    {
        if (i == skip)
        {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}