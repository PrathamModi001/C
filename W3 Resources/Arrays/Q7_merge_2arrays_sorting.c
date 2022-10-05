#include<stdio.h>


int main()
{
    int s1,s2,s3;
    int i=0,j=0,k=0;
    printf("Enter the size of the first array: "); scanf("%d",&s1);
    printf("Enter the size of the second array: "); scanf("%d",&s2);
    s3=s1+s2;
    int arr1[s1]; int arr2[s2]; int arr3[s3];

    //user inputted elements of array 1.
    for(int a=0;a<s1;a++){
        printf("Element %d: ",a+1); scanf("%d",&arr1[a]);
    }

    //user inputted elements of array 2.
    for(int a=0;a<s2;a++){
        printf("Element %d: ",a+1); scanf("%d",&arr2[a]);
    }

    while(i<s1 && j<s2){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++; k++;
        }
        else{
            arr3[k]=arr2[j];
            j++; k++;
        }
    }
    
    while(i<s1){
        arr3[k]=arr1[i];
        i++; k++;
    }

    while(j<s2){
        arr3[k]=arr1[j];
        j++; k++;
    }

    printf("\nThe elements of array3 are: ");
    for(int a=0;a<s3;a++){
        printf("%d ",arr3[a]);
    }
    return 0;
}