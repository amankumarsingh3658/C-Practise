#include <stdio.h>

int TenTimes(int a)
{
    a = a * 10;
    return a;
}
int main()
{
    int i = 10;
    int c = TenTimes(i);
    printf("%d\n", i); // The value will not change as the copy is passed in the Function
    printf("%d", c); 
    return 0;̃
}