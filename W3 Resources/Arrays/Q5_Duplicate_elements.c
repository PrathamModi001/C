#include<stdio.h>


int main()
{
    int n,dup=0;
    printf("Enter the number of elements to be stored in the array: "); scanf("%d",&n);
    int arr1[n-1]; int arr2[n-1];
    for(int a=0;a<n;a++){
        printf("Element %d: ",a+1); scanf("%d",&arr1[a]);
    }
    for(int a=0;a<n;a++){
        arr2[a] = arr1[a];
    }
    for(int a=0;a<n;a++){
        for(int b=a+1;b<n;b++){
            if(arr1[a] == arr2[b]){
                dup++;
                break;
            }
        }
    }
    for(int a=0;a<n;a++){
        printf("\nElement %d - %d\n",a+1,arr1[a]);
    }
    printf("\n\n\tThe number of duplicate elements in the array are: %d",dup);
    return 0;
}