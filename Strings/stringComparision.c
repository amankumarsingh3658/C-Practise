#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Hello";
    char *str2 = "Amano";

    int val = strcmp(str,str2);
    printf("The Value is : %d",val);
    return 0;
}