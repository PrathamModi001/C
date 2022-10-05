#include<stdio.h>
int big(int *arr, int size){

    for(int a=0;a<size;a++){
        for(int b=a+1,nxtbig=-1;b<size-a;b++){
            if(arr[a]<arr[b]){
                nxtbig = arr[b];
                break;
            }
            printf("Next Big Element of %d in the array is: %d\n",arr[a],nxtbig);
        }
    }
}

int main()
{
    int arr[] = {5,3,10,9,6,13},size;
    size = sizeof(arr)/sizeof(arr[0]);

    for(int a=0;a<size;a++){
        printf("%d ",arr[a]);
    }
    
    printf("Next big elements in the array are: \n");
    big(arr,size);
    return 0;
}