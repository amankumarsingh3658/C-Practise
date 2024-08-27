#include <stdio.h>
#include <string.h>

int main(){
    char *str = "This";
    char str2[34];

    strcpy(str2,str);
    printf("The Value of STR2 is %s",str2);
    return 0;
}