#include <stdio.h>
struct vector
{
    int x;
    int y;
};
int main()
{
    struct vector v1, v2;

    v1.x = 34;
    v1.y = 53;

    printf("X dim is %d and Y dim is %d\n", v1.x , v1.y);

    v2.x = 53;
    v2.y = 24;

    printf("X dim is %d and Y dim is %d\n", v2.x , v2.y);
    return 0;
}