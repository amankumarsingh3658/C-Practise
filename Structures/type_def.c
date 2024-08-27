#include <stdio.h>
#include <string.h>
typedef struct employee {
    int code;
    float salary;
    char name[10];
} emp;

void show(emp emp1){
    printf("The code is %d\n",emp1.code);
    printf("The salary is %f\n",emp1.salary);
    printf("The name is %s\n",emp1.name);
}
int main(){
    emp e1;
    emp *ptr; 

    ptr = &e1;
    ptr->code = 100;
    ptr->salary = 12345;
    strcpy(ptr->name,"Aman");

    show(e1);
    return 0;
}