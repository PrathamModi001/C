#include <stdio.h>

int main()
{
    int x, y, iden = 0;
    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &x);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &y);
    int arr[x][y];

    printf("\nEnter the elements of the matrix: \n");
    for (int a = 0; a < x; a++)
    {
        for (int b = 0; b < y; b++)
        {
            printf("Element [%d][%d]: ", a + 1, b + 1);
            scanf("%d", &arr[a][b]);
        }
    }

    printf("\nThe matrix is shown by: \n");
    for (int a = 0; a < x; a++)
    {
        printf("\n");
        for (int b = 0; b < y; b++)
        {
            printf("%d ", arr[a][b]);
        }
    }

    for (int a = 0; a < x; a++){
        for (int b = 0; b < y; b++){
            if (a == b){
                if (arr[a][b] == 1){
                    iden = 1;
                }
                else{
                    iden==0;
                }
            }
            else{
                if (arr[a][b] == 0){
                    iden = 1;
                }
                else{
                    iden==0;
                }
            }
        }
    }

    if(iden==0){
        printf("\nThe matrix is not an identity matrix!");
    }
    else{
        printf("\nThe matrix is an identity matrix!");
    }
    return 0;
}