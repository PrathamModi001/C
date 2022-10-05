#include<stdio.h>


int main()
{
    int mulTable[3][10];

    for(int a=0;a<10;a++){
        mulTable[0][a] = 2*(a+1);
        printf("%d ",mulTable[0][a]);
    }
    printf("\n");

    for(int b=0;b<10;b++){
        mulTable[1][b] = 7*(b+1);
        printf("%d ",mulTable[1][b]);
    }
    printf("\n");

    for(int c=0;c<10;c++){
        mulTable[2][c] = 9*(c+1);
        printf("%d ",mulTable[2][c]);
    }
    printf("\n");
    return 0;
}