#include <stdio.h>
void sumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum)/ 2;
}

int main()
{
    int i = 8, j = 5, sum;
    float avg;
    sumAndAvg(i, j, &sum, &avg);
    printf("The sum is %d\n", sum);
    printf("The Avg is %.2f\n", avg);
    return 0;
}