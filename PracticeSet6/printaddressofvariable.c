#include <stdio.h>

int main()
{
    int i = 47;
    int *j = &i;

    printf("The Address of i is : %u\n", &i);
    printf("The Value of i is : %u\n", *(&i));
    printf("The Address of i is : %u\n", j);
    printf("The Value of i is : %u\n", *j);
    return 0;
}