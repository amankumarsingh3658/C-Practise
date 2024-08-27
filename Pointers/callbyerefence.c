#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    // printf("%u\n", a);
    // printf("%u\n", b);

    // printf("%u\n", *a);
    // printf("%u\n", *b);
}

void wrongswap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 3;
    int y = 4;
    printf("The value of x and y Before swap is %d and %d\n", x, y);
    wrongswap(x, y); // This will not work as we are calling by value The copy of varables will be sent to the function and original variables wont be affected
    printf("The value of x and y After swap is %d and %d\n", x, y);
    printf("***************************************************\n");
    printf("The value of x and y Before swap is %d and %d\n", x, y);
    swap(&x, &y); // This will work as we are calling by Reference, The Address of varables will be sent to the function.
    printf("The value of x and y After swap is %d and %d\n", x, y);
    return 0;
}