#include<stdio.h>


int main()
{
    int mul[10];
    int n;
    printf("Enter the value of n: "); scanf("%d",&n);

    for(int a=0;a<10;a++){
        mul[a] = n*(a+1);
        printf("%d X %d = %d\n",n,a+1,mul[a]);
    }
    return 0;
}