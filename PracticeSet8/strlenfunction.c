#include <stdio.h>
#include <string.h>

int strlength(char *str){
    int length = 0;
    while (*str != '\0')
    {
        length++;
        str++;
    }
    return length;
}

int main(){
    char str[] = "Aman";
    strlen(str);
    int l = strlength(str);
    printf("The Length of the String is %d",l);
    return 0;
}