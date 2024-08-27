#include <stdio.h>

// void printPattern(int n)
// {
//     int odd = 2*n - 1;
//     if (n == 1)
//     {
//         printf("*\n");
//         return;
//     }
//     printPattern(n - 1);
//     for (int i = 0; i < odd; i++)
//     {
//         printf("*");
//     }
//     printf("\n");

// }

void printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n = 3;
    printPattern(n);
    return 0;
}