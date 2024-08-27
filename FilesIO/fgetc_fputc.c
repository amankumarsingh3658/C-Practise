#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("putcdemo.txt", "w");
    // char c = fgetc(ptr);
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));

    fputc('c',ptr);
    fclose(ptr);
    return 0;
}