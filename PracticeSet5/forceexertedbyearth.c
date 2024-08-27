#include <stdio.h>

float force(float mass)
{
    float result;
    result = mass * 9.8;
    return result;
}
int main()
{
    float mass;
    printf("Enter Mass of Object : ");
    scanf("%f", &mass);
    printf("The Force exerted by earth is : %.2f", force(mass));
    return 0;
}