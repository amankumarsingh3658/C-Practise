#include<stdio.h>

int main(int argc, char const *argv[])
{
    int length,breadth;
    int area = 0;
    printf("Enter the length of rectangle: ");
    scanf("%d",&length);
    printf("Enter the Breadth of rectangle: ");
    scanf("%d",&breadth);
    area = length*breadth;
    printf("Area of rectangle is : %d",area);
    return 0;
}
