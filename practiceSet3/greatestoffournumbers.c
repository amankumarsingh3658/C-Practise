#include <stdio.h>

int main()
{
    int a, b, c, d;
    char greatest;
    printf("Enter four numbers : ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        greatest = 'A';
    }
    else if (b > c && b > d)
    {
        greatest = 'B';
    }
    else if (c > d)
    {
        greatest = 'C';
    }
    else
    {
        greatest = 'D';
    }
    printf("The Greatest number is %c", greatest);
    return 0;
}