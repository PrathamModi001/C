#include<stdio.h>


int main()
{
    int x,y,sum=0;
    printf("Enter the number of rows and columns: "); scanf("%d",&x); scanf("%d",&y);
    int arr[x][y];

    printf("Input the elements of the matrix: \n");
    for(int a=0;a<x;a++){
        for(int b=0;b<y;b++){
            printf("Element [%d][%d]: ",a+1,b+1);
            scanf("%d",&arr[a][b]);
        }
    }

    printf("The matrix is: ");
    for(int a=0;a<x;a++){
        printf("\n");
        for(int b=0;b<y;b++){
            printf("%d ",arr[a][b]);
        }
    }
    for(int a=0;a<x;a++){
        for(int b=0;b<y;b++){
            if(a==b){
                sum+= arr[a][b];
            }
        }
    }

    printf("\nThe sum of the diagonal in the matrix is: %d",sum);
    return 0;
}