#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("aman.txt", "r");
    int num;
    int num2;

    
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);
    fclose(ptr);
    printf("The Value of num is : %d\n", num);
    printf("The Value of num is : %d", num2);
    return 0;
}