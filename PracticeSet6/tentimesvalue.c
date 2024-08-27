#include <stdio.h>
void tenTimes(int *a){
    *a = 10 * *a;
}
int main(){
    int a=10;
    tenTimes(&a);
    printf("%u",a);
    return 0;
}