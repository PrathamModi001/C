#include<stdio.h>


int main()
{
    int n,temp;
    printf("Enter the size of the array: "); scanf("%d",&n);
    int arr[n];

    printf("Enter the elements of the array: \n");
    for(int a=0;a<n;a++){
        printf("Element %d: ",a+1); scanf("%d",&arr[a]);
    }
    // ASCENDING: 1 2 3 4 5
    for(int a=0;a<n;a++){
        for(int b=a+1;b<n;b++){// simple swapping logic.
            if(arr[a]>arr[b]){// not required kachra is arr[a] because arr[a] > arr[b] and we need ascending order;
                temp=arr[a];  // so put temp = kachra;
                arr[a]=arr[b];
                arr[b]=temp;
            }
        }
    }

    printf("The sorted elements of the array are: ");
    for(int a=0;a<n;a++){
        printf("%d ",arr[a]);
    }
    return 0;
}