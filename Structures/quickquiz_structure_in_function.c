#include <stdio.h>
#include <string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};

void showEmployee(struct employee emp){
    printf("The Code of employee is : %d\n",emp.code);
    printf("The Salary of employee is : %f\n",  emp.salary);
    printf("The Name of employee is : %s\n",emp.name);
}
int main(){
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;

    ptr->code = 100;
    ptr->salary = 19876;
    strcpy(ptr->name , "Aman");

    showEmployee(e1);
    return 0;
}