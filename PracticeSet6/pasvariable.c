#include <stdio.h>

void printAdd(int a){
    printf("The address of a is : %d\n",&a);
}

int main(){
    int i = 4;
    printAdd(i);
    printf("The Address of i is : %u",&i);
    return 0;
}