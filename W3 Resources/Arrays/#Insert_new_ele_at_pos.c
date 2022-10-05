#include<stdio.h>


int main()
{
    int n,x,loc;
    printf("Enter the size of the array: "); scanf("%d",&n);
    int arr[n];

    printf("Enter the elements of the array: \n");
    for(int a=0;a<n;a++){
        printf("Element %d: ",a+1); scanf("%d",&arr[a]);
    }

    printf("\nEnter the new element to be inserted: "); scanf("%d",&x);
    printf("Enter the location to be inserted at: "); scanf("%d",&loc);

    for(int a=n-1;a>=loc;a--){
        arr[a+1] = arr[a];
    }
    arr[loc] = x;

    printf("\n\nThe array with inserted new element is: \n");
    for(int a=0;a<n+1;a++){
        printf("Element %d - %d\n",a+1,arr[a]); 
    }
    return 0;
}