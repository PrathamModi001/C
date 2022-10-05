#include<stdio.h>


int main()
{
    int count=1;
    int arr[] = {5,3,10,9,6,13};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("The given array is: \n");
    for(int a=0;a<n;a++){
        printf("%d ",arr[a]);
    }
    
    printf("\nThe given element is: 3\n");

    for(int a=0;a<n;a++){
        //count = 1;
        for(int b=a+1;b<n;b++){
            if(arr[a]==arr[b]){
                count++;
            }
        }
        if(count>(n/2)){
                printf("3 appears more than %d times in the given arr[]",(n/2));
            }
    }
    return 0;
}