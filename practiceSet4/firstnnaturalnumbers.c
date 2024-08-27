#include <stdio.h>

int main()
{
    int i;
    int num;
    int sum = 0;
    printf("Enter number : ");
    scanf("%d", &num);
    printf("The Sum of first n natural numbers is : \n");
    while (i <= num)
    {
        sum += i;
        i++;
    }
    printf("%d", sum);

    return 0;
}