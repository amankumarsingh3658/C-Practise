#include <stdio.h>

// Check wheter a number is even or odd

int main()
{
    // int a, b;
    // printf("Enter a number : ");
    // scanf("%d", &a);

    // if (a % 2 == 0)
    // {
    //     printf("%d is Even", a);
    // }
    // else
    // {
    //     printf("%d is Odd", a);
    // }

    int age;
    printf("Enter age : ");
    scanf("%d", &age);

    if (age > 90)
    {
        printf("You are above 90 , you can't Drive");
    }
    else
    {
        printf("You can Drive");
    }

    return 0;
}