#include <stdio.h>

int main(){
    int i = 45;
    int *ptr = &i;
    int **ptr_ptr = &ptr;

    printf("%d",**ptr_ptr);
    return 0;
}