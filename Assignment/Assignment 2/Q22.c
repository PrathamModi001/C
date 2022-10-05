#include<stdio.h>


int main()
{
    int x,y,temp;
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

    //transpose
    for(int a=0;a<x;a++){
        for(int b=0;b<y;b++){
            temp = arr[a][b];
            arr[a][b] = arr[b][a];
            arr[b][a] = temp;
            break;// if not used then og gets swapped then swapped gets again swapped to become og so no change so break is required
        }
    }

    printf("\nThe transpose of the matrix is: ");
    for(int a=0;a<x;a++){
        printf("\n");
        for(int b=0;b<y;b++){
            printf("%d ",arr[a][b]);
        }
    }
    return 0;
}