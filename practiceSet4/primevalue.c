#include <stdio.h>

int main()
{
    int num, prime = 0;
    printf("Enter Number : ");
    scanf("%d", &num);

    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            prime = 1;
            break;
        }
    }
    if (prime == 1 && num!=2)
    {
        printf("The Number is not Prime");
    }
    else
    {
        printf("The Number is Prime");
    }

    return 0;
}