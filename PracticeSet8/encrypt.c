#include <stdio.h>

void encrypt(char *c){
    int i = 0;
    while(c[i] != '\0'){
        c[i] = c[i] + 1;
        i++;
    }
}

int main(){
    char c[] = "Aman";
    encrypt(c);
    printf("The Encrypted String is : %s",c);
    return 0;
}