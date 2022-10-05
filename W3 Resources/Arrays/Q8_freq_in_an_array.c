#include<stdio.h>


int main()
{
    int n,freq=0,key;
    printf("Enter the size of array: "); scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of the array: \n");

    for(int a=0;a<n;a++){
        printf("Element %d: ",a+1); scanf("%d",&arr[a]);
    }

    printf("\nEnter the number to find the frequency: "); scanf("%d",&key);

    for(int a=0;a<n;a++){
        if(arr[a]==key){
            freq++;
        }
    }
    printf("\n\nThe frequency of %d is %d",key,freq);
    return 0;
}