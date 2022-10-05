#include<stdio.h>


int main()
{
    int arr[2][3][4];
    int x;
    int *ptr=&x;
    for(int a=0;a<2;a++){
        for(int b=0;b<3;b++){
            for(int c=0;c<4;c++){
                printf("The Address of Arr[%d][%d][%d] is %u\n",a,b,c,&arr[a][b][c]);
            }
        }
    }
    return 0;
}