#include <stdio.h>
struct employee {
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee aman = {100,20000,"Aman"};
    printf("Code is : %d\n",aman.code);
    printf("Salary is : %0.3f\n",aman.salary);
    printf("Name is : %s\n",aman.name);

    struct employee shubh = {0}; //will initialize all elements of shubh as zero;
    return 0;
}