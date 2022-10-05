#include<stdio.h>

int main()
{
    int n,a,x;

    printf("Input the number of rows: ");
    scanf("%d",&n);

    for(a=1;a<=n;a++){
        for(x=1;x<=a;x++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}