#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;

    printf("The value of a and b respectively are :\n");
    scanf("%d",&a);
    scanf("%d",&b);

    c= pow(a,b);

    printf("The value of a raised to b is %d",c);
    return 0;
}