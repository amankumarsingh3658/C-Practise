#include <stdio.h>

int main()
{
    int marks[4]; // Allocate space for four integers
    printf("Enter Value of marks for student 1: ");
    scanf("%d", &marks[0]);
    printf("Enter Value of marks for student 2: ");
    scanf("%d", &marks[1]);
    printf("Enter Value of marks for student 3: ");
    scanf("%d", &marks[2]);
    printf("Enter Value of marks for student 4: ");
    scanf("%d", &marks[3]);

    printf("You have entered %d %d %d %d", marks[0], marks[1], marks[2], marks[3]);
    return 0;
}