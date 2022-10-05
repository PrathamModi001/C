#include<stdio.h>

int main()
{
    int n,a;
    float series=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(a=1;a<=n;a++){
        series+=(float)1/a;
        printf("1/%d ",a);
    }
    printf("\nThe sum of the series upto %d terms is %f",n,series);
    return 0;
}