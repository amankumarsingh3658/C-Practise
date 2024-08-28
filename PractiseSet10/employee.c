#include <stdio.h>

int main(){
    FILE *ptr;
    char name1[10];
    char name2[10];
    int salary1;
    int salary2;

    printf("Enter the Name of First person : ");
    scanf("%s",&name1);
    printf("Enter the Name of Second person : ");
    scanf("%s",&name2);
    printf("Enter the Salary of First person : ");
    scanf("%d",&salary1);
    printf("Enter the Salary of Second person : ");
    scanf("%d",&salary2);
    ptr = fopen("employee.txt","w");
    fprintf(ptr , "%s",name1);
    fprintf(ptr,", %d\n",salary1);
    fprintf(ptr,"%s",name2);
    fprintf(ptr,", %d",salary2);
    return 0;
}