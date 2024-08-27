#include<stdio.h>

int main()
{
    int i;
    do
    {
        printf("The value of i is %d\n",i+1);
        i++;
        if (i==4)
        {
           break;
        }
        
    } while (i<=10);
    
    return 0;
}