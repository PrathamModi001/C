#include<stdio.h>


int main()
{
    int n,count=0,k=0;
    printf("Enter the size of the array: "); scanf("%d",&n);
    int arr[n],odd[n];

    printf("Enter the elements of the array: \n");
    for(int a=0;a<n;a++){
        printf("Element %d: ",a+1); scanf("%d",&arr[a]);
    }

    for(int a=0;a<n;a++){
        count=1;
        for(int b=0;b<n;b++){
            if(arr[a]==arr[b] && a!=b){
                count++;
            }
        }
        if(count%2!=0){
            odd[k]=arr[a];
            k++;
        }
    }

    printf("The element occuring odd number of times is: ");
    printf("%d ",odd[0]);
    return 0;
}