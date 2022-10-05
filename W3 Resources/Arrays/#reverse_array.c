#include<stdio.h>
void reverse(int *arr, int n){
    int temp;
    for(int a=0;a<n/2;a++){
        temp = arr[a];
        arr[a] = arr[n-a-1];
        arr[n-a-1] = temp;
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    reverse(arr,5);
    printf("The values of the elements inside the array are: \n");
    for(int a=0;a<5;a++){
        printf("Element - %d: %d\n",a+1,arr[a]);
    }
    return 0;
}