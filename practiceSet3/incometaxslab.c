#include <stdio.h>

int main()
{
    float tax = 0, salary;

    printf("Enter Salary : ");
    scanf("%f", &salary);

    if (salary < 250000)
    {
        tax = 0;
    }
    else if (salary >= 250000 && salary < 500000)
    {
        tax = tax + (0.05) * (salary - 250000);
    }
    else if (salary >= 500000 && salary < 1000000)
    {
        tax = tax + (0.20) * (salary-500000);
    }
    else
    {
        tax = tax + (0.3) * (salary-1000000);
    }
    printf("Tax to be paid is %f",tax);
    return 0;
}