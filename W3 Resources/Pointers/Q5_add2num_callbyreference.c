#include<stdio.h>
int sum(int *a,int *b);

int main()
{
    int x,y; int *a=&x; int *b=&y;

    printf("Enter the first number: "); scanf("%d",&x);
    printf("Enter the second number: "); scanf("%d",&y);
    
    printf("The sum of the 2 numbers %d and %d is %d",x,y,sum(a,b)); // or we can do sum(&x,&y) also //
    return 0;
}

int sum(int *a,int *b){
    int result=*a+*b;
    return result;
}