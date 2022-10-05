#include<stdio.h>


int main()
{
    int x,y;
    printf("Enter the dimensions of the matrix: \n"); scanf("%d",&x); scanf("%d",&y);
    int arr[x][y];
    
    printf("The elements of the 2D array are: \n");
    for(int a=0;a<x;a++){
        for(int b=0;b<y;b++){
            printf("Element [%d][%d]: ",a+1,b+1);
            scanf("%d",&arr[a][b]);
        }
    }
    
    printf("The matrix of the given data is displayed as: \n");
    for(int a=0;a<x;a++){
        printf("\n");
        for(int b=0;b<y;b++){
            printf("%d ",arr[a][b]);
        }
    }
    return 0;
}