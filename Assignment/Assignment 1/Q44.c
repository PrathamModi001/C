#include<stdio.h>


int main()
{
    int a,b,n,hcf=1,lcm;
    printf("Enter the first number: "); scanf("%d",&a);
    printf("Enter the second number: "); scanf("%d",&b);

    for(n=1;n<=b;n++){
        if(a%n==0 && b%n==0){
            hcf=n;
        }
    }
    lcm=(a*b)/hcf;
    printf("\n\nThe LCM of the given numbers %d and %d is %d",a,b,lcm);
    return 0;
}