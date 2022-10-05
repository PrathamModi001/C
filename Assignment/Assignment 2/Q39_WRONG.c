#include<stdio.h>


int main()
{
    int pos,n=11,i=0,j=0;
    //printf("Enter the size of the array: "); scanf("%d",&n);
                 //0,1,2,3,4 ,5 ,6 ,7 ,8 ,9 ,10   
    int arr[] = {0,3,6,9,12,14,18,20,22,25,27};

    // printf("\nEnter the elements of the array: \n");
    // for(int a=0;a<n;a++){
    //     printf("Element %d: ",a); scanf("%d",&arr[a]);
    // }
    
    printf("Enter the position of the array: "); scanf("%d",&pos);
    int first[n],end[n];

    for(int times=0;times<(n-pos);times++){
        first[i] = arr[pos];
        i++; pos++;
    }

    for(int a=0;a<pos;a++){
        end[j] = arr[a];
        j++;
    }

    printf("The rotated array from the %dth position is: ",pos);
    for(int a=0;a<i;a++){
        printf("%d ",first[a]);
    }

    for(int a=0;a<pos;a++){
        printf("%d ",end[a]);
    }

    return 0;
}