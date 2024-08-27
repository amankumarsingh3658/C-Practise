#include <stdio.h>

int sumofn(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int result = sumofn(n - 1) + n;
    return result;
}

int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    printf("The sum of first n natural numbers is : %d", sumofn(n));
    return 0;
}