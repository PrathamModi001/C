#include<stdio.h>


int main()
{
    int x,y; int *a=&x; int *b=&y;

    printf("Enter the first number: "); scanf("%d",&x);
    printf("Enter the second number: "); scanf("%d",&y);
    int sum = *a+*b;
    printf("The sum of the 2 numbers %d and %d is %d",x,y,sum);
    return 0;
}