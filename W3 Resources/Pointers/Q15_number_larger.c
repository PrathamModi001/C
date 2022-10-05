#include<stdio.h>
int larger(int *a,int *b);

int main()
{
    int x,y;
    int *a=&x;int*b=&y;
    printf("Enter the first number: "); scanf("%d",&x);
    printf("Enter the second number: "); scanf("%d",&y);
    larger(&x,&y);
    return 0;
}

int larger(int *a,int *b){
    if(*a>*b){
        printf("%d is larger!",*a);
    }
    else{
        printf("%d is larger!",*b);
    }
}