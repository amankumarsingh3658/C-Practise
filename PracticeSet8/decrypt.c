#include <stdio.h>

void decrypt(char *c){
    int i = 0;

    while (c[i] != '\0')
    {
        c[i] = c[i] -1;
        i++;
    }
    
    
}

int main(){
    char c[] = "Bnbo!Bnbo";
    decrypt(c);
    printf("The decrypted String is : %s",c);
    return 0;
}