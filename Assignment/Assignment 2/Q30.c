#include<stdio.h>


int main()
{
    int x1,y1,x2,y2,eq=0;
    printf("Enter the number of rows and colums for the first matrix: "); scanf("%d",&x1); scanf("%d",&y1);
    printf("Enter the number of rows and colums for the second matrix: "); scanf("%d",&x2); scanf("%d",&y2);
    int arr1[x1][y1],arr2[x2][y2];

    printf("Enter the elements of the first array: \n");
    for(int a=0;a<x1;a++){
        for(int b=0;b<y1;b++){
            printf("Element [%d][%d]: ",a+1,b+1); scanf("%d",&arr1[a][b]);
        }
    }

    printf("Enter the elements of the second array: \n");
    for(int a=0;a<x2;a++){
        for(int b=0;b<y2;b++){
            printf("Element [%d][%d]: ",a+1,b+1); scanf("%d",&arr2[a][b]);
        }
    }

    printf("The first matrix is: ");
    for(int a=0;a<x1;a++){
        printf("\n");
        for(int b=0;b<y1;b++){
            printf("%d ",arr1[a][b]);
        }
    }

    printf("\nThe first matrix is: ");
    for(int a=0;a<x2;a++){
        printf("\n");
        for(int b=0;b<y2;b++){
            printf("%d ",arr2[a][b]);
        }
    }

    if(x1!=x2 || y1!=y2){
        eq==0;
    }
    else{
        for(int a=0;a<x1;a++){
            for(int b=0;b<y1;b++){
                if(arr1[a][b]==arr2[a][b]){
                    eq=1;
                }
                else{
                    eq=0;
                    break;
                }
            }
        }
    }
    if(eq==1){
        printf("\nThe two matrices are equal!");
    }
    else{
        printf("\nThe two matrices are not equal!");
    }
    return 0;
}