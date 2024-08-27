#include <stdio.h>

int main()
{
    int physics, chemistry, maths;
    float total;
    printf("Enter Physics Marks : ");
    scanf("%d", &physics);
    printf("Enter Chemistry Marks : ");
    scanf("%d", &chemistry);
    printf("Enter Maths Marks : ");
    scanf("%d", &maths);

    total = (physics + maths + chemistry)/3;

    if (total < 40 || physics < 33 || chemistry < 33 || maths < 33)
    {
        if (total < 40)
        {
            printf("Your percentage is %f and you are failed because of less percentage", total);
        }
        else if (physics < 33)
        {
            printf("Your percentage is %f and you are failed because of less Marks in Physics", total);
        }
        else if (chemistry < 33)
        {
            printf("Your percentage is %f and you are failed because of less Marks in Chemistry", total);
        }
        else
        {
            printf("Your percentage is %f and you are failed because of less Marks in Maths", total);
        }
    }else
    {
        printf("You are Pass");
    }
    

    return 0;
}
