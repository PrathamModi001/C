#include<stdio.h>


int main()
{
    int n;
    printf("Enter the size of the array: "); scanf("%d",&n);
    int arr1[n],arr2[n];

    printf("Input %d elements in the array: \n",n);
    for(int a=0;a<n;a++){
        printf("Element %d: ",a+1); scanf("%d",&arr1[a]);
    }

    for(int a=0;a<n;a++){
        arr2[a] = arr1[a];
    }

    printf("\nThe elements in the first array are: \n");
    for(int a=0;a<n;a++){
        printf("%d ",arr1[a]);
    }

    printf("\nThe elements in the second array are: \n");
    for(int a=0;a<n;a++){
        printf("%d ",arr2[a]);
    }
    return 0;
}