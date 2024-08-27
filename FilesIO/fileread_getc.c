#include <stdio.h>

int main()
{
    FILE *ptr;
    char c;
    ptr = fopen("getcdemo.txt", "r");
    c = fgetc(ptr);
    // printf("%c",c);
    while (c!= EOF)
    {
        printf("%c", c);
        c = fgetc(ptr);
    }
    fclose(ptr);
    return 0;
}