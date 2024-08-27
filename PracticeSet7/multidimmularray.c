#include <stdio.h>
void printTable(int *arr , int num , int n)
{
    printf("The Multiplication table of %d is : \n" , num);
    for (int i = 0; i < n; i++)
    {
        arr[i] = num*(i+1);   
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d X %d = %d\n",num,i+1,arr[i]); 
    }
    printf("******************************************************\n\n");
}
int main()
{
    int mulTable[3][10];
    printTable(mulTable[0] , 2 , 10);
    printTable(mulTable[1] , 7 , 10);
    printTable(mulTable[2] , 9 , 10);
    return 0;
}