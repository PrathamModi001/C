#include<stdio.h>


int main()
{
    int n,max,min;
    printf("Enter the size of the array: "); scanf("%d",&n);
    int arr[n];

    printf("Enter the elements of the array: \n");
    for(int a=0;a<n;a++){
        printf("Element %d: ",a+1); scanf("%d",&arr[a]);
    }
    max=arr[0]; min=arr[0];

    for(int a=0;a<n;a++){
        if(arr[a]>max){
            max=arr[a];
        }

        if(arr[a]<min){
            min=arr[a];
        }
    }

    printf("\n\nMaximum Element: %d",max);
    printf("\nMinimum Element: %d",min);
    return 0;
}