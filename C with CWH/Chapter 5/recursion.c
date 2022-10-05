#include<stdio.h>
int factorial(int a);

int main()
{
    int a;
    printf("Enter the value of a: "); scanf("%d",&a);
    printf("Its factorial is: %d",factorial(a));
    return 0;
}

int factorial(int x){
    if(x==1 || x==0){
        return 1;
    }
    else{
        return factorial(x-1)*x;
    }
}