#include<stdio.h>


int main()
{
    int n,sn=0,sa=0;
    printf("Enter the number of elements in the array: "); scanf("%d",&n);
    int arr[n];

    sn=(n*(n+1))/2;
    printf("Enter the elements of the array: \n"); 
    for(int a=0;a<n-1;a++){
        printf("Element %d: ",a+1); scanf("%d",&arr[a]);
        sa+=arr[a];
    }

    printf("The missing number in the array is: %d",sn-sa);
    return 0;
}