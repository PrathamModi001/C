#include<stdio.h>


int main()
{
    int n,x,loc,temp;
    printf("Enter the size of the array: "); scanf("%d",&n);
    int arr[n];

    printf("Enter the elements of the array: \n");
    for(int a=0;a<n;a++){
        printf("Element %d: ",a+1); scanf("%d",&arr[a]);
    }

    printf("\nEnter the new element to be inserted: "); scanf("%d",&x);
    printf("Enter the location to be inserted at: "); scanf("%d",&loc);

    for(int a=n-1;a>=loc;a--){ //insertion of new element loop
        arr[a+1] = arr[a];
    }
    arr[loc] = x;

    for(int a=0;a<n+1;a++){
        for(int b=a+1;b<n+1;b++){
            if(arr[a]<arr[b]){
                temp=arr[a];  
                arr[a]=arr[b];
                arr[b]=temp;
            }
        }
    }

    printf("\n\nThe array with inserted new element is: \n");
    for(int a=0;a<n+1;a++){
        printf("%d ",arr[a]); 
    }


    return 0;
}