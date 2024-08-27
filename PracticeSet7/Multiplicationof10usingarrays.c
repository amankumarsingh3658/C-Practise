#include <stdio.h>

int main(){
    int arr[10];
    int *ptr = arr;
    
    for (int i = 0; i < 10; i++)
    {
        *ptr = i+1;
        printf("5 X %d = %d\n",i+1,(*ptr)*5);
    }
    
    return 0;
}