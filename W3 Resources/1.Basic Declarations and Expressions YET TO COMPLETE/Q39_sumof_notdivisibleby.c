#include<stdio.h>

int main()
{
    int a,b,n,sum=0;

    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);

    for (n=a;n<=b;n++){
        if (n%17!=0){
            sum+=n;
        }
    }
    printf("The sum of numbers that are not divisible by 17 between %d and %d is %d",a,b,sum);
    return 0;
}