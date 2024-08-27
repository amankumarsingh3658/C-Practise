#include <stdio.h>
struct vector
{
    int x;
    int y;
};

struct vector sumVector(struct vector v1 , struct vector v2){
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;

    return result;
}

int main()
{
    struct vector v1, v2, sum;
    v1.x = 32;
    v1.y = 40;
    v2.x = 38;
    v2.y = 32;

    sum = sumVector(v1, v2);
    printf("X dim is %d and Y dim is %d",sum.x,sum.y);
    return 0;
}