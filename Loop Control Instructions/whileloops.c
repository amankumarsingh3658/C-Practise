#include <stdio.h>

int main()
{
    int a;
    printf("Enter value of a : ");
    scanf("%d", &a);
    while (a < 10)
    {
        printf("%d ", a);
        a++;
    }
    return 0;
}