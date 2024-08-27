#include <stdio.h>

int main()
{
    int sum;
    for (int i = 0; i <= 10; i++)
    {
        sum += 8 * i;
    }
    printf("%d", sum);

    return 0;
}