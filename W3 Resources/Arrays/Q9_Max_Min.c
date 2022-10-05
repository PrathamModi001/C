#include<stdio.h>


int main()
{
    int n;
    printf("Enter the number of elements in the array: "); scanf("%d",&n);
    int arr[n]; 

    for(int a=0;a<n;a++){
        printf("Element %d: ",a+1); scanf("%d",&arr[a]);
    }
    int max=arr[0],min=arr[0];
    
    for(int a=1;a<n;a++){
        if(arr[a]>max){
            max = arr[a];
        }

        if(arr[a]<min){
            min = arr[a];
        }
    }

    printf("\nMaximum Element: %d",max);
    printf("\nMinimum Element: %d",min);
    return 0;
}