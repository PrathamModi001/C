#include<stdio.h>


int main()
{
    int n,count=0;
    printf("Enter the size of the array: "); scanf("%d",&n);
    int arr1[n],arr2[n];

    printf("Input %d elements in the array: \n",n);
    for(int a=0;a<n;a++){
        printf("Element %d: ",a+1); scanf("%d",&arr1[a]);
    }

    // for(int a=0;a<n;a++){
    //     arr2[a] = arr1[a];
    // }

    for(int a=0;a<n;a++){
        for(int b=a+1;b<n;b++){
            if(arr1[a]==arr1[b]){ //or take arr2[b];
                count++;          // by uncommenting up for loop  
                break;
            }
        }
    }
    printf("The number of duplicate elements are: %d",count);
    return 0;
}