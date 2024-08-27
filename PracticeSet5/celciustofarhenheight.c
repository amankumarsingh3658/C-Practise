#include <stdio.h>

float celctofarhnht(float celcius)
{
    float conv = (celcius * 9 / 5) + 32;
    printf("%f",conv);
    return conv;
}

int main()
{
    float celcius;
    printf("Enter value in celcius : ");
    scanf("%f", &celcius);
    printf("The value in farheinheight is %f", celctofarhnht(celcius));
    return 0;
}