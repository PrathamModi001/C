#include<stdio.h>
int fact(int a,int *b);

int main()
{
    int x,y;
    printf("Enter the number to find the factorial of: "); scanf("%d",&x);
    fact(x,&y);
    printf("The factorial is: %d",y);
    return 0;
}

int fact(int a,int *b){
    *b=1; 
    for(int n=1;n<=a;n++){
        (*b)*=n;
    }
}