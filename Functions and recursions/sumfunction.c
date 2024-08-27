#include <stdio.h>

int sum(int a, int b){
    int result = a+b;
    return result;
} //sum is a function that takes a and b as input and return int as value
int main(){
    int c;
    c = sum(2,3); //function call
    printf("%d",c);
    return 0;
}