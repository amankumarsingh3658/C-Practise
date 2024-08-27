#include <stdio.h>
typedef struct Date
{
    int date;
    int month;
    int year;
} date;

void display(date d1, date d2)
{
    printf("The value of date is %d-%d-%d\n", d1.date, d1.month, d1.year);
    printf("The value of date is %d-%d-%d\n", d2.date, d2.month, d2.year);
}

int cmp(date d1, date d2)
{
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }
    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }
    if (d1.date > d2.date)
    {
        return 1;
    }
    if (d1.date < d2.date)
    {
        return -1;
    }
    return 0;
}
int main()
{
    date d1 = {21, 11, 2002};
    date d2 = {22, 10, 2002};
    display(d1, d2);
    int a = cmp(d1,d2);
    printf("The Comparision of dates return %d",a);
    return 0;
}