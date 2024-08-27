#include <stdio.h>
#import <string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee facebook[100]; 
    facebook[0].code = 100;
    facebook[0].salary = 1000;
    strcpy(facebook[0].name , "Aman");

    facebook[1].code = 101;
    facebook[1].salary = 989;
    strcpy(facebook[1].name , "Jatin");

    facebook[2].code = 102;
    facebook[2].salary = 850;
    strcpy(facebook[2].name , "Karan");
    return 0;
}