//WRITE CODE OF DESCENDING ORDER(BADE SE CHHOTA) 
//INPUT THE NUM OF LARGEST TO BE FOUND LIKE 1ST LARGEST OF 2ND LARGEST AISA.
// FIR 1ST LARGEST MATLAB HOGA ARR[0] (DESCENDING SORTED WALA ARRAY)
//SO PRINT THE ARR[NUM-1] WALA ELEMENT
#include<stdio.h>


int main()
{
    int n,temp,num;
    printf("Enter the size of the array: "); scanf("%d",&n);
    int arr[n];

    printf("Enter the elements of the array: \n");
    for(int a=0;a<n;a++){
        printf("Element %d: ",a+1); scanf("%d",&arr[a]);
    }
    // ASCENDING: 1 2 3 4 5
    for(int a=0;a<n;a++){
        for(int b=a+1;b<n;b++){
            if(arr[a]<arr[b]){
                temp=arr[a];  
                arr[a]=arr[b];
                arr[b]=temp;
            }
        }
    }

    printf("Enter the nth maximum number to be found: "); scanf("%d",&num);
    printf("The #%d largest number in the array is: \n",num);
    printf("%d",arr[num-1]);
    return 0;
}