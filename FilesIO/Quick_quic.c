#include <stdio.h>

int main(){
    int num;
    int num2;
    FILE *ptr;
    ptr = fopen("aman.txt" , "r");
    if (ptr == NULL)
    {
        printf("The file doesn't Exist");
    }else
    fscanf(ptr , "%d",&num);
    fscanf(ptr , "%d",&num2);
    printf("The Value of num1 is : %d\n",num);
    printf("The Value of num2 is : %d",num2);
    
    return 0;
}