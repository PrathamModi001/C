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
    int mulTable[3][10];
    printTable(mulTable[0],3,10,2);
    printTable(mulTable[1],3,10,7);
    printTable(mulTable[2],3,10,9);
    return 0;
}