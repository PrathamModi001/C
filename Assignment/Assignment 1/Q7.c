#include<stdio.h>

int main()
{
    int n,a,b;

    printf("Input upto the table number starting from 1 : ");
    scanf("%d",&n);

    printf("Multiplication table from 1 to %d\n",n);

    for(a=1;a<=n;a++){
        for(b=1;b<=n;b++){
            printf("%dX%d = %d, ",a,b,a*b);
        }
        printf("\n");
    }
    return 0;
}