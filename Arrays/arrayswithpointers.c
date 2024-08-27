#include <stdio.h>

int main()
{
    int marks[4];
    int *ptr = &marks[0];

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %dth element: ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("the value of %dth element: %d\n", i + 1, marks[i]);
    }
    // printf("Hello");
    return 0;
}