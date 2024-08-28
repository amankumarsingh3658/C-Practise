#include <stdio.h>

int main(){
    FILE *ptr;
    int a;
    int b;
    int c;
    ptr = fopen("three_integers.txt","r");
    fscanf(ptr, "%d %d %d",&a,&b,&c);
    printf("The value of a, b and c is : %d %d %d",a,b,c);
    return 0;
}