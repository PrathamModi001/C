#include<stdio.h>

int main()
{
    int n;
    float s=0,a;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for (a=1;a<=n;a++){
        s+=1/a;
    }
    printf("The Sn value for n = %d is %.2f",n,s);
    return 0;
}