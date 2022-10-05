#include<stdio.h>

int main()
{
    int n,a,fact=1;
    printf("Input the number: ");
    scanf("%d",&n);

    for (a=1;a<=n;a++){
        fact*=a;
    }
    printf("The factorial of %d is %d",n,fact);
    return 0;
}