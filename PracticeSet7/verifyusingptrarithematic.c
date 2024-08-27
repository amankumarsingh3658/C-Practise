#include <stdio.h>

int main()
{
    int arr[10];
    // int *ptr = &arr[0]; This line and the line below both points to the first element of array
    int *ptr = arr;
    ptr = ptr + 2;
    if (ptr == &arr[2])
    {
        printf("These Point to the same location in memory");
    }
    else
    {
        printf("These Point to the same location in memory");
    }

    return 0;
} 