#include<stdio.h>

int main()
{
    int a=4;
    int b=8;
    printf("The value of a+b is : %d",a+b);
    printf("The value of a-b is : %d",a-b);
    printf("The value of a*b is : %d",a*b);
    printf("The value of a/b is : %d",a/b);

    // printf("The value of a*b is : %d",a.b or (a)(b)); => No operator is assumed.
    // operator = +,-,*,/ , values that perform operations.
    // % modular division operator :- Gives remainder.
    // operands = a,b can be int or float,int or real.

    // No operator performs exponentiation in c.
    // use pow(x,y) to perform exponetiation.
    // ^ is a bitwise Xor operation;
    return 0;
}