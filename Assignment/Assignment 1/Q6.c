#include<stdio.h>

int main()
{
    int n,a;

    printf("Input the number: ");
    scanf("%d",&n);

    for(a=1;a<=10;a++){
        printf("%d X %d = %d\n",n,a,n*a);
    }
    return 0;
}