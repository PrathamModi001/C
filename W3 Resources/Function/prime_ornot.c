#include<stdio.h>
int prime(int a);

int main()
{
    int primeornot,n;
    printf("Input the number: "); scanf("%d",&n);
    primeornot = prime(n);

    if(primeornot==1){
        printf("\n\nThe number %d is a prime number!\n",n);
    }
    else{
        printf("\n\nThe number %d is not a prime number!",n);
    }
    return 0;
}
int prime(int a){

    for(int n=2;n<=a;n++){
        if(a%n==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}