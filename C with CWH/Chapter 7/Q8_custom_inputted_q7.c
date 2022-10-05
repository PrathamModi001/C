#include<stdio.h>
void printTable(int *arr,int row,int col,int num){
    for(int a=0;a<col;a++){
        arr[a] = num*(a+1);
        printf("%d ",arr[a]);
    }
    printf("\n");
}

int main()
{
    int row,col,num1,num2,num3;
    printf("Enter the number of rows: "); scanf("%d",&row);
    printf("Enter the number of columns: "); scanf("%d",&col);
    printf("Enter the numbers to be multiplied: "); scanf("%d",&num1); scanf("%d",&num2); scanf("%d",&num3);
    int mulTable[row][col];
    printTable(mulTable[0],row,col,num1);
    printTable(mulTable[1],row,col,num2);
    printTable(mulTable[2],row,col,num3);
    return 0;
}