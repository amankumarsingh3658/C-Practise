#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a = 4, b = 7;
    printf("the value of 4+7 is %d", sum(a, b));
    return 0;
}