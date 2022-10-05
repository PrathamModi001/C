#include<stdio.h>


int main()
{
    int num,a,r,n,sum=0,times=1;

    printf("Enter the starting term of the series: "); scanf("%d",&a);
    printf("Input the number of terms for the A.P. series: "); scanf("%d",&n);
    printf("Enter the common ratio: "); scanf("%d",&r);

    printf("The A.P. series is: \n\n");

    for(num=a;times<=n;times++){
        printf(" %d +",num);
        sum+=num;
        num*=r;
    }
    printf("\nAnd its sum is: %d",sum);
    return 0;
}