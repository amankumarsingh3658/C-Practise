#include <stdio.h>

void printArray(int n, int m, int array[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d",array[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int arr[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value of %dth element in %dth position : ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printArray(2,3,arr);

    return 0;
}