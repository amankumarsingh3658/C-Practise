#include <stdio.h>

float average(int a, int b, int c)
{
    float average = (float)(a + b + c) / 3;
    return average;
}

int main()
{
    int a, b, c;
    float result;
    printf("Enter Three Numbers : ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    result = average(a, b, c);
    printf("The result is %f : ", result);
    return 0;
}