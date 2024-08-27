#include <stdio.h>
#include <string.h>

int main(){
    char str[12] = "Hello ";
    char str2[] = "Aman";

    strcat(str,str2); //No Autospace

    puts(str);
    return 0;
}