#include<stdio.h>


int main()
{
    int a,b,n,hcf=1;
    printf("Enter the first number: "); scanf("%d",&a);
    printf("Enter the second number: "); scanf("%d",&b);

    for(n=1;n<=b;n++){
        if(a%n==0 && b%n==0){
            hcf=n;
        }
    }
    printf("The HCF of %d and %d is %d",a,b,hcf);
    return 0;
}