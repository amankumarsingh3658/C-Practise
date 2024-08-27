#include <stdio.h>
struct vector
{
    int x;
    float y;
};

int main(){
    struct vector v1;
    struct vector *ptr;

    ptr = &v1;

    ptr->x = 32;
    ptr->y = 34.5;

    printf("X dim is %d\nY dim is %0.2f",v1.x,v1.y);
    return 0;
}