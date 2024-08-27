#include <stdio.h>

int main(){
    char name[34];
    printf("Enter Your Name : ");
    fgets(name , 34 ,stdin);
    // printf("Your Name is : %s",name);
    puts(name);
    return 0;
}