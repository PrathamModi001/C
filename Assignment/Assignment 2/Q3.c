#include<stdio.h>


int main()
{
    int n,sum=0;
    printf("Enter the size of the array: "); scanf("%d",&n);
    int arr[n];
    printf("Input %d elements in the array: \n",n);

    for(int a=0;a<n;a++){
        printf("Element %d: ",a+1); scanf("%d",&arr[a]);
        sum+=arr[a];
    }

    printf("The values stored into the array are: ");
    for(int a=0;a<n;a++){
        printf("%d ",arr[a]);
    }
    printf("\nThe sum of the elements in the array is: %d",sum);
    return 0;
}