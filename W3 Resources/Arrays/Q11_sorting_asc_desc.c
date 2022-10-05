#include<stdio.h>


int main()
{
    int n;
    printf("Enter the number of elements in the array: "); scanf("%d",&n);
    int arr[n]; 

    for(int a=0;a<n;a++){
        printf("Element %d: ",a+1); scanf("%d",&arr[a]);
    }

    for(int a=0;a<n;a++){
        for(int b=a+1;b<n;b++){
            if(arr[a]>arr[b]){        //simple swaping logic
                int temp = arr[a];  //because we will swap numbers that
                arr[a] = arr[b];    //are smaller with bigger.
                arr[b] = temp;
            }
        }
    }
    for(int a=0;a<n;a++){
        printf("%d ",arr[a]);
    }
    return 0;
}