#include<stdio.h>


int main()
{
    int n,count;
    printf("Enter the size of the array: ");scanf("%d",&n);
    int arr[n];

    printf("Enter the elements of the array: \n");
    for(int a=0;a<n;a++){
        printf("Element %d: ",a+1); scanf("%d",&arr[a]);
    }

    printf("The unique elements in the array are: ");
    for(int a=0;a<n;a++){
        count=0;
        for(int b=0;b<=n;b++){
            if(a!=b){
                if(arr[a]==arr[b]){
                    count++;
                }
            }
        }
        if(count==0){
            printf("%d ",arr[a]);
        }
    }
    return 0;
}