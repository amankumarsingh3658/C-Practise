#include<stdio.h>

int main()
{
    //Number divisible by 97 or not.
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    printf("Divisibility Test returns : %d\n",num%97); //if remainder is 0
    return 0;
}