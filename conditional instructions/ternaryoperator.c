#include <stdio.h>

int main()
{
    int a;
    printf("Enter value of a : ");
    scanf("%d", &a);

    (a < 5) ? printf("A is less than 5") : printf("A is Greater than 5");
    return 0;
}