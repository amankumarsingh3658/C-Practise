#include <stdio.h>

void printArray(int n,int value, int arr[][value], int *elements )
{
    for (int i = 0; i < n; i++)
    {
        printf("The Multiplication Table of %d is : \n", elements[i]);
        for (int j = 0; j < value; j++)
        {
            arr[i][j] = elements[i] * (j + 1);
            printf("%d X %d = %d\n", elements[i], j + 1, arr[i][j]);
        }
        printf("********************************************************\n\n");
    }
}
int main()
{
    int n;
    int value;
    printf("Enter the Number of Tables you want to print : ");
    scanf("%d", &n);
    printf("Enter the value till you want to print tables : ");
    scanf("%d",&value);
    int elements[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Numbers for which you want a Table : ");
        scanf("%d", &elements[i]);
    }
    int arr[n][value];
    printArray(n, value, arr, elements);
    return 0;
}