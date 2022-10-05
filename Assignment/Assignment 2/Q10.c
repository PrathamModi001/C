#include<stdio.h>


int main()
{
    int n,b=0,c=0;
    printf("Enter the size of the array: "); scanf("%d",&n);
    int arr[n],even[n],odd[n];

    printf("Enter the elements of the array: \n");
    for(int a=0;a<n;a++){
        printf("Element %d: ",a+1); scanf("%d",&arr[a]);
    }

    for(int a=0;a<n;a++){
        if(arr[a]%2==0){
            even[b]=arr[a];
            b++;
        }
        else{
            odd[c]=arr[a];
            c++;
        }
    }

    printf("Even Elements: \n");
    for(int a=0;a<b;a++){
        printf("%d ",even[a]);
    }

    printf("\nOdd Elements: \n");
    for(int a=0;a<c;a++){
        printf("%d ",odd[a]);
    }
    return 0;
}