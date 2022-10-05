#include<stdio.h>


int main()
{
    int x,sum=0;
    printf("Enter the size of the square matrix: "); scanf("%d",&x);
    int arr[x][x];

    printf("Input the elements of the matrix: \n");
    for(int a=0;a<x;a++){
        for(int b=0;b<x;b++){
            printf("Element [%d][%d]: ",a+1,b+1);
            scanf("%d",&arr[a][b]);
        }
    }

    printf("The matrix is: ");
    for(int a=0;a<x;a++){
        printf("\n");
        for(int b=0;b<x;b++){
            printf("%d ",arr[a][b]);
        }
    }
    for(int a=0;a<x;a++){
        for(int b=0;b<x;b++){
            if(a+b==x-1){
                sum += arr[a][b];
            }
        }
    }

    printf("\n\nThe sum of the diagonal in the matrix is: %d",sum);
    return 0;
}