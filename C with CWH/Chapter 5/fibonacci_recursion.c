#include<stdio.h>
int fib(int n);

int main()
{
    int n;
    printf("Enter the value of n: "); scanf("%d",&n);
    printf("\nFibonacci series upto %d terms is :\n\n%d",n,fib(n));
    return 0;
}

int fib(int n){
    int x;
    if(x==0){
        return 0;
    }
    if(x==1){
        return 0;
    }
    if(x==2){
        return 1;
    }
    else{
        return fib(x-1) + fib(x-2);
    }
    
}