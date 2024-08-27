#include <stdio.h>
typedef struct complex{
    int real;
    int complex;
}comp;

void display(comp c){
    printf("The value of Real part is %d\n",c.real);
    printf("The value of Complex part is %d\n",c.complex);
}
int main(){
    comp cnums[5];

    for(int i=0;i<5;i++){
        printf("Enter The Real Value for %d num: ",i+1);
        scanf("%d",&cnums[i].real);
        printf("Enter The Complex Value for %d num: ",i+1);
        scanf("%d",&cnums[i].complex);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("For comp %d\n",i+1);
        display(cnums[i]);
    }
    
    return 0;
}