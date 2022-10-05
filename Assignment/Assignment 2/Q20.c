#include<stdio.h>


int main()
{
    int n;
    printf("Input the size of the square matrix (less than 5): "); scanf("%d",&n);
    int arr1[n][n]; int arr2[n][n]; int sub[n][n];

    printf("Enter the elements of the first matrix: \n");
    for(int a=0;a<n;a++){
        for(int b=0;b<n;b++){
            printf("Element [%d][%d]: ",a+1,b+1);
            scanf("%d",&arr1[a][b]);
        }
    }
    for(int a=0;a<n;a++){
        printf("\n");
        for(int b=0;b<n;b++){
            printf("%d ",arr1[a][b]);
        }
    }
    printf("\nEnter the elements of the second matrix: \n");
    for(int a=0;a<n;a++){
        for(int b=0;b<n;b++){
            printf("Element [%d][%d]: ",a+1,b+1);
            scanf("%d",&arr2[a][b]);
        }
    }
    for(int a=0;a<n;a++){
        printf("\n");
        for(int b=0;b<n;b++){
            printf("%d ",arr2[a][b]);
        }
    }

    printf("\nThe subtraction of the matrices will be: \n");
    for(int a=0;a<n;a++){
        for(int b=0;b<n;b++){
            sub[a][b] = arr1[a][b] - arr2[a][b];
        }
    }
    
    for(int a=0;a<n;a++){
        printf("\n");
        for(int b=0;b<n;b++){
            printf("%d ",sub[a][b]);
        }
    }
    return 0;
}