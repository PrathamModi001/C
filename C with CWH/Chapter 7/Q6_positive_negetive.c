#include<stdio.h>
void count( int *arr, int n){
    int pos=0,neg=0,zero=0;

    for(int a=0;a<n;a++){
        
        if(arr[a]>0){
            pos++;
        }
        
        if(arr[a]<0){
            neg++;
        }
        if(arr[a]==0){
            zero++;
        }
    }
    printf("The number of positive elements in the array are: %d\n",pos);
    printf("The number of negetive elements in the array are: %d\n",neg);
    printf("The number of zero elements in the array are: %d\n",zero);
}

int main()
{
    int n;
    int arr[n];

    printf("Enter the value of n: "); scanf("%d",&n);
    printf("The elements of the array are: \n");
    
    for(int a=0;a<n;a++){
        printf("Element - %d: ",a+1); scanf("%d",&arr[a]);
    }
    count(arr,n);
    return 0;
}