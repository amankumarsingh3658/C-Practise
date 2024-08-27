#include <stdio.h>

int main(){
    char *ptr = "Aman";
    char ptr1[] = "Aman";

    ptr = "Hello";
    // ptr1 = "hello";

    puts(ptr);
    puts(ptr1);
    return 0;
}