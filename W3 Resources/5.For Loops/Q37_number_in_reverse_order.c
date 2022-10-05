#include<stdio.h>


int main()
{
    int n,a,b,c,d,e;
    printf("Enter the number (Five digit or less): "); scanf("%d",&n);
    a=n/10000;
    b=(n%(a*10000)/1000);
    c=(n%((a*10000)+(b*1000))/100);
    d=(n%((a*10000)+(b*1000)+(c*100))/10);
    e=(n%((a*10000)+(b*1000)+(c*100)+(d*10)));
    printf("The number %d when printed in reverse would give: %d%d%d%d%d",n,e,d,c,b,a);
    return 0;
}