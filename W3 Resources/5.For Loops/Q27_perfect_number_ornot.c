#include<stdio.h>

int main()
{
    int a,n,sum=0;

    printf("Enter the number to be tested: "); scanf("%d",&n);

    printf("\nThe positive divisors are: \n");
    for(a=1;a<n;a++){
        if(n%a==0){
            printf("%d ",a);
            sum+=a;
        }
    }
    printf("\n\nThe sum of the divisors is: %d",sum);
    if(sum==a){
        printf("\n\tSo, the number is perfect number!");
    }
    else{
        printf("\n\tSo, the number is not a perfect number!");
    }
    return 0;
}