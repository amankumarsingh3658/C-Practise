#include <stdio.h>

int countPositive(int *arr , int n){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            count++;
        }
        
    }
    return count;   
}
int main(){
    int arr[] = {1,2,-2,-4,-5,-6,7,8,9,0};
    int count;
    count = countPositive(arr , 10);
    printf("No of positive elements in array are : %d",count);
    return 0;
}