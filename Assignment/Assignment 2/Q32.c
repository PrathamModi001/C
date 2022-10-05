#include<stdio.h>


int main()
{
    int n,s;
    printf("Enter the sum: "); scanf("%d",&s);
    printf("Enter the number of elements: "); scanf("%d",&n);
    int arr[100];

    printf("Input the elements of the array: \n");
    for(int a=0;a<n;a++){
        printf("Element %d: ",a+1); scanf("%d",&arr[a]);
    }

    for(int a=0;a<n;a++){
        for(int b=a+1;b<n;b++){
            if(arr[a] + arr[b] == s){
                printf("The Pair is %d and %d\n",arr[a],arr[b]);
            }
        }
    }
    return 0;
}