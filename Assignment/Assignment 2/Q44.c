#include<stdio.h>


int main()
{
    int arr[] = {2,7,4,7,8,3,4};
    int rep[100],k=0;

    printf("The given array is: \n");
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int a=0;a<size;a++){
        printf("%d ",arr[a]);
    }
    
    for(int a=0;a<size;a++){
        for(int b=a+1;b<size;b++){
            if(arr[a]==arr[b]){
                rep[k] = arr[a];
                k++;
                break;
            }
        }
    }

    printf("\nThe repeating elements in the array are: ");
    for(int a=0;a<k;a++){
        printf("%d ",rep[a]);
    }
    return 0;
}