#include <stdio.h>

int factorial(int x)
{
    if (x == 1 | x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}

int main()
{
    int a = 4;
    printf("The Factorial of %d is %d", a, factorial(a));
    return 0; 
}

