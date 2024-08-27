#include <stdio.h>

int main()
{
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);
    printf("The first n natural numbers is : \n");

    for (int i = 0; i <= num; i++)
    {

        printf("%d\n", i);
    }

    return 0;
}