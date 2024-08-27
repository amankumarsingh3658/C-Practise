#include <stdio.h>

void copyStrings(char *st,char *st2){
    int i=0;
    while (st[i]!='\0')
    {
        st2[i] = st[i];
        i++;
    }
    
}

int main(){
    char st[] = "AmanSingh";
    char st2[20];
    copyStrings(st,st2);
    printf("The Value of st is : %s\n",st);
    printf("The Value of st2 is : %s",st2);
    return 0;
}