#include<stdio.h>


int main()
{
    int n,loc;
    printf("Enter the size of the array: "); scanf("%d",&n);
    int arr[n];

    printf("Enter the elements of the array: \n"); 
    for(int a=0;a<n;a++){
        printf("Element %d: ",a+1); scanf("%d",&arr[a]);
    }

    printf("Enter the position to be deleted: "); scanf("%d",&loc);
    n--;
    for(int a=loc;a<=n;a++){
        arr[a-1] = arr[a];
    }

    printf("\n\nThe new array is given by: ");
    for(int a=0;a<n;a++){
        printf("%d ",arr[a]);
    }
    return 0;
}