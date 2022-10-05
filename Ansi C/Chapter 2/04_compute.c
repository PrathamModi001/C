#include<stdio.h>

int main()
{
    int a,b,c;
    float x;

    printf("The given values of a, b, c respectively are\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    x=a/(b-c);

    printf("The problem to be solved is given by the expression:\n X = a/b-c\n");
    printf("The solution to which is %f",x );

    return 0;
}