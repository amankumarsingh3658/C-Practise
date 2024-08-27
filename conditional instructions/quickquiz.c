#include <stdio.h>

int main()
{
    int Marks;
    char Grade;
    printf("Enter Marks : ");
    scanf("%d", &Marks);

    if (Marks >= 90 && Marks <= 100)
    {
        Grade = 'A';
    }
    else if (Marks >= 80 && Marks < 90)
    {
        Grade = 'B';
    }
    else if (Marks >= 70 && Marks < 80)
    {
        Grade = 'C';
    }
    else if (Marks >= 60 && Marks < 70)
    {
        Grade = 'D';
    }
    else if (Marks >= 30 && Marks < 60)
    {
        Grade = 'E';
    }
    else if (Marks < 30)
    {
        Grade = 'F';
    }
    printf("Your Grade is %c\n", Grade);
    (Grade == 'F') ? printf("You Failed\n") : printf("Congratulations You Are Pass\n");
    return 0;
}