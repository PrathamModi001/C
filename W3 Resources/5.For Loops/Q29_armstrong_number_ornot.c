#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,c,sum;

    printf("Input a number \n(A 3 digit number only): "); scanf("%d",&n);

    a=n/100;
    b=(n%100)/10;
    c=n-(a*100+b*10);

    sum=(pow(a,3)+pow(b,3)+pow(c,3));
    printf("The sum of the cubes of each digit is %d",sum);

    if(/*((a*a*a)+(b*b*b)+(c*c*c))*/sum==n){
        printf("\nSo, %d is an Armstrong Number!",n);
    }
    else{
        printf("\nSo, %d is not an armstrong number!",n);
    }
    return 0;
}