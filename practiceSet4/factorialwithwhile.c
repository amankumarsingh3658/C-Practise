#include <stdio.h>

int main()
{
    int i = 1;
    int num;
    int fact =1;

    printf("Enter number : ");
    scanf("%d", &num);

    while (i <= num)
    {
        fact *= i;
        i++;
    }
    printf("%d",fact);
    return 0;
}