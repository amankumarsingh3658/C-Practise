#include <stdio.h>

int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    printf("Multiplication table of number is : \n");

    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }

    return 0;
}