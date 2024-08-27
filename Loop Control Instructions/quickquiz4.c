#include <stdio.h>

int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d", &num);

    printf("The first n natural numbers in reverse order is : \n");

    for (int i = num; i>=0; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}