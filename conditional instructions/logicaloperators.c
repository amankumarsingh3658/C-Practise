#include <stdio.h>
#include<stdbool.h>

int main()
{
    int age;
    int vipPass = 0;
    printf("Enter Age : ");
    scanf("%d", &age);

    printf("Do you have a vip Pass : ");
    scanf("%d",&vipPass);

    if (age >= 18 && age <= 70 || vipPass == 1)
    {
        printf("You can Drive");
    }
    else
    {
        printf("You cannot Drive");
    }

    return 0;
}