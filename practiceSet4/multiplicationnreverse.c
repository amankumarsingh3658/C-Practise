#include <stdio.h>

int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d", &num);

    printf("The Multiplication Table of Number in Reverse is : \n");

    for (int i = 10; i >= 1; i--)
    {
        printf("%d X %d = %d\n", num, i, num * i);
    }

    return 0;
}